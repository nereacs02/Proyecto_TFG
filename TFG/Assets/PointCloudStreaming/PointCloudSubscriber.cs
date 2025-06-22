using System;
using System.Collections;
using System.Collections.Generic;
using RosSharp.RosBridgeClient.MessageTypes.Sensor;
using UnityEngine;
using UnityEngine.UI;
using System.Threading;


namespace RosSharp.RosBridgeClient
{
    [RequireComponent(typeof(RosConnector))]
    public class PointCloudSubscriber : UnitySubscriber<MessageTypes.Sensor.PointCloud2>
    {
        private byte[] byteArray; //datos sin procesar de la nube
        private bool isMessageReceived = false; //control de si hay nuevo mensaje
        bool readyToProcessMessage = true;
        private int size;

        //arrays con la nube de puntos y colores
        private Vector3[] pcl; 
        private Color[] pcl_color;

        //variables del mensaje de PointCloud
        int width;
        int height;
        int row_step;
        int point_step;

        protected override void Start()
        {
            base.Start(); //inicio de la suscripción ROS

        }

        public void Update()
        {

            if (isMessageReceived)
            {
                PointCloudRendering();
                isMessageReceived = false;
            //si hay un nuevo mensaje lo procesa y lo marca como procesado
            }


        }

        protected override void ReceiveMessage(PointCloud2 message)
        {
            //se ejecuta automáticamente cuando llega un mensaje desde ROS

            size = message.data.GetLength(0);

            byteArray = new byte[size];
            byteArray = message.data;
            //Se copia la nube de puntos (data) a byteArray

            width = (int)message.width;
            height = (int)message.height;
            row_step = (int)message.row_step;
            point_step = (int)message.point_step;
            //datos de la nube de puntos

            size = size / point_step; //calcula el número de puntos
            isMessageReceived = true;
        }

        
        void PointCloudRendering()
        {
            //procesa cada punto del byteArray para extraer coordenadas y colores
            
            pcl = new Vector3[size];
            pcl_color = new Color[size];

            int x_posi;
            int y_posi;
            int z_posi;

            float x;
            float y;
            float z;

            int rgb_posi;
            int rgb_max = 255;

            float r;
            float g;
            float b;

            //para cada punto
              
            for (int n = 0; n < size; n++)
            {
                x_posi = n * point_step + 0;
                y_posi = n * point_step + 4;
                z_posi = n * point_step + 8;

                x = BitConverter.ToSingle(byteArray, x_posi);
                y = BitConverter.ToSingle(byteArray, y_posi);
                z = BitConverter.ToSingle(byteArray, z_posi);
                //extrae x,y,z
                //usa bitconverter para leer los valores float desde el array de bytes
                
                rgb_posi = n * point_step + 16;

                b = byteArray[rgb_posi + 0];
                g = byteArray[rgb_posi + 1];
                r = byteArray[rgb_posi + 2];
                //extrae color BGR
                r = r / rgb_max;
                g = g / rgb_max;
                b = b / rgb_max;
                //normaliza los valores de color

                pcl[n] = new Vector3(x, z, y); 
                pcl_color[n] = new Color(r, g, b); 
                //se guardan los puntos y colores

            }
        }


        //funciones que permiten a otros scripts acceder a los puntos y colores 
        public Vector3[] GetPCL()
        {
            return pcl;
        }

        public Color[] GetPCLColor()
        {
            return pcl_color;
        }
    }
}



