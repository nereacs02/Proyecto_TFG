using UnityEngine;
using UnityEngine;
using UnityEngine.UI;
using RosSharp.RosBridgeClient;
using sensor_msgs = RosSharp.RosBridgeClient.MessageTypes.Sensor;

public class DepthImageSubscriberUI : UnitySubscriber<sensor_msgs.Image>
{
    public RawImage rawImage; //Imagen donde se va a visualizar

    private Texture2D texture;
    private bool recibido = false;
    private byte[] depthData;

    private int width = 640;
    private int height = 480;

    // Rango de profundidad (en mm), dada por los datos de la cámara
    public int mindistancia = 200;   
    public int maxdistancia = 4000; 

    protected override void Start()
    {
        base.Start(); //inicio
    }

    private void Update()
    {
        if (recibido)
            ActualizarTextura(); //si se reciben datos se actualiza la textura
    }

    protected override void ReceiveMessage(sensor_msgs.Image message)
    {
        //se llama automáticamente cuando se recibe un mensaje por el topic y se actualizan sus datos
        depthData = message.data; 
        width = (int)message.width;
        height = (int)message.height;
        recibido = true;
    }

    private void ActualizarTextura()
    {
        if (texture == null)
        {
            texture = new Texture2D(width, height, TextureFormat.RGB24, false); 
            rawImage.texture = texture; //inicia la textura y la asigna al rawImage
        }

        Color32[] pixels = new Color32[width * height];

        for (int i = 0; i < width * height; i++)
        {
            int index = i * 2;
            ushort depth = (ushort)(depthData[index] | (depthData[index + 1] << 8));
            //transforma los datos de profundidad en píxeles de colores

            // Ignorar valores cero (sin datos)
            if (depth == 0)
            {
                pixels[i] = Color.black;
                continue;
            }

            // Normalizar profundidad entre 0 y 1
            float normalizado = (depth - mindistancia) / (float)(maxdistancia - mindistancia);
            Color32 color = GetJetColor(normalizado); //coloreado en base a profundidad

            pixels[i] = color;
        }

        texture.SetPixels32(pixels);
        texture.Apply();

        recibido = false;
    }

    private Color32 GetJetColor(float value)
    {
        //Asigna un color según el valor de profundidad, usando una escala térmica Jet
        value = Mathf.Clamp01(value);

        float r = Mathf.Clamp01(1.5f - Mathf.Abs(4f * value - 3f));
        float g = Mathf.Clamp01(1.5f - Mathf.Abs(4f * value - 2f));
        float b = Mathf.Clamp01(1.5f - Mathf.Abs(4f * value - 1f));

        return new Color(r, g, b, 1.0f);
    }
}




