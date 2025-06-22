using UnityEngine;
using UnityEngine.UI;
using RosSharp.RosBridgeClient;
using sensor_msgs = RosSharp.RosBridgeClient.MessageTypes.Sensor;

public class CompressedImageSubscriber : UnitySubscriber<sensor_msgs.CompressedImage>
{
    public RawImage rawImage;

    private Texture2D texture;
    private bool recibido = false;
    private byte[] jpegData;

    protected override void Start()
    {
        base.Start();
    }

    private void Update()
    {
        if (recibido)
        {
            if (texture == null)
                texture = new Texture2D(2, 2); // El tamaño se ajusta automáticamente

            texture.LoadImage(jpegData); // Descomprime el JPG
            rawImage.texture = texture;

            recibido = false;
        }
    }

    protected override void ReceiveMessage(sensor_msgs.CompressedImage message)
    {
        jpegData = message.data;
        recibido = true;
    }
}
