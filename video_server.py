import cv2 #librería para procesar imágenes
import numpy as np #librería para manejar datos 
from flask import Flask, Response #crear un servidor web
import pyrealsense2 as rs #librería de las realsense


# Inicia la cámara RealSense
pipeline = rs.pipeline()
config = rs.config()
config.enable_stream(rs.stream.color, 424, 240, rs.format.bgr8, 15)
config.enable_stream(rs.stream.depth, 480, 270, rs.format.z16, 15)
pipeline.start(config)

app = Flask(__name__) #name es el nombre el modulo actual

def generar_video_color():
    while True:
        frames = pipeline.wait_for_frames()
        color_frame = frames.get_color_frame()
        if not color_frame:
            continue
        frame = np.asanyarray(color_frame.get_data()) #Convierte los datos de imagen a array de Numpy
        _, buffer = cv2.imencode('.jpg', frame, [int(cv2.IMWRITE_JPEG_QUALITY), 50]) #Comprime la imagen
        frame_bytes = buffer.tobytes() #para poder transmitir por red
        yield (b'--frame\r\n'
               b'Content-Type: image/jpeg\r\n\r\n' + frame_bytes + b'\r\n') #yield envia cada imagen en jpeg
                                                                            #de forma continua y tiempo real

def generar_video_prof():
    colorizer = rs.colorizer()
    while True:
        frames = pipeline.wait_for_frames()
        depth_frame = frames.get_depth_frame()
        if not depth_frame:
            continue
        depth_color_frame = colorizer.colorize(depth_frame) #mapa de colores a la imagen de profundidad
        depth_image = np.asanyarray(depth_color_frame.get_data())
        _, buffer = cv2.imencode('.jpg', depth_image, [int(cv2.IMWRITE_JPEG_QUALITY), 50])
        frame_bytes = buffer.tobytes()
        yield (b'--frame\r\n'
               b'Content-Type: image/jpeg\r\n\r\n' + frame_bytes + b'\r\n')



@app.route('/video_stream')
def video_stream():
    return Response(generar_video_color(), mimetype='multipart/x-mixed-replace; boundary=frame')
#se envian muchos archivos jpg, con x-replace se reemplaza la anterior
#frame se usar como separador entre una imagen JPEG y la siguiente
@app.route('/depth_stream')
def depth_stream():
    return Response(generar_video_prof(), mimetype='multipart/x-mixed-replace; boundary=frame')


if __name__ == '__main__':  #Si el archivo se ejecuta directamente
    app.run(host='0.0.0.0', port=5000) #ejecutar el localhost, puerto 5000
