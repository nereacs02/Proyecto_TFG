
//Librerías necesarias
using UnityEngine;
using UnityEngine.UI; //Para poder trabajar con elementos de Unity
using System.Collections; //Colecciones de .NET Framework
using System.Net; //Para hacer solicitudes por red
using System.IO; //Para trabajar con flujos de datos

public class MPEGStream : MonoBehaviour
{
    public RawImage rawImage; //Donde se va a colocar la imagen
    public string URL = "http://192.168.1.30:5000/video_stream";//web donde está el video

    private Texture2D texture; //textura que se actualiza con cada imagen JPEG


    private void Start()
    {
        texture = new Texture2D(2, 2);
        StartCoroutine(Obtener_Video()); //corrutina, funcion que ejecuta codigo de forma
                                    //secuencial y no bloqueante
    }
    IEnumerator Obtener_Video() //Comienza la corrutina
    {
        //Conexion http a la URL proporcionada y accede al stream
        HttpWebRequest req = (HttpWebRequest)WebRequest.Create(URL);
        req.Timeout = 10000;
        WebResponse resp = req.GetResponse();
        Stream stream = resp.GetResponseStream();

        byte[] buffer = new byte[16384]; //Array de bytes, se acumulan los bytes leidos
        MemoryStream videoStream = new MemoryStream();

        while (true) //leer continuamente el stream
        {
            int bytesleidos = stream.Read(buffer, 0, buffer.Length);
            if (bytesleidos == 0) continue;
            //escribir los bytes en videostream

            videoStream.Write(buffer, 0, bytesleidos);
            //Convierte el VideoStream a un array y lo guarda
           byte[] videobytes =videoStream.ToArray();
            //extrae imagen JPEG del array
            byte[] video_jpg= ExtraerJPG(videobytes);
            if (video_jpg != null)
            {
                texture.LoadImage(video_jpg); //si no llega algo nulo, se actualiza la textura
                rawImage.texture = texture; //asignamos la textura al raw image

                // Reinicia el MemoryStream para el siguiente frame
                videoStream.SetLength(0);
            }

            yield return new WaitForSeconds(0.0001f);
        }
    }


    private byte[] ExtraerJPG(byte[] data)
    { //Extrae una imagen JPEG válida de un array de bytes que contiene un flujo MJPEG.
        int comienzo = -1;
        int final = -1;
        for (int i =0; i<data.Length; i++) //recorremos el array de bytes
        { 
                if (data[i] == 0xFF && data[i+1] == 0xD8)
                {
                    comienzo = i; //inicio de una imagen
            }
                if (data[i] == 0xFF && data[i + 1] == 0xD9)
                {
                    final = i + 1; //fin de una imagen
                break; ;
                }
            }

        if ((comienzo != -1) && (final != -1)) //si encuentra inicio y fin copia los datos a la imagen jpg
        {
            int tamaño = final - comienzo + 1; //longitud de la imagen JPEG
            byte[] jpg = new byte[tamaño]; //almacenar imagen extraida
            System.Array.Copy(data, comienzo, jpg, 0, tamaño); //copiar los bytes
            return jpg; //imagen extraida en JPG

        }
        return null;
    }



    

}

