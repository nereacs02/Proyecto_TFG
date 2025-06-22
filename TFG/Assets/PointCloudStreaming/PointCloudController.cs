using UnityEngine;

namespace RosSharp.RosBridgeClient
{

    [RequireComponent(typeof(PointCloudRenderer))]

    public class PointCloudController : MonoBehaviour
    {
        public PointCloudSubscriber pointCloudSubscriber; //recibe la nube de puntos desde ROS

        private PointCloudRenderer pointCloudRenderer; //dibuja la nube de puntos


        void Start()
        {
            pointCloudRenderer = GetComponent<PointCloudRenderer>();
        }

        void Update() 
        {
            if (pointCloudSubscriber == null) return;

            Vector3[] points = pointCloudSubscriber.GetPCL(); //obtener las coordenadas de los puntos
            Color[] colors =pointCloudSubscriber.GetPCLColor(); //obtener los colores de los puntos

            if (points != null && colors != null && points.Length > 0 && points.Length == colors.Length) 
            {
                pointCloudRenderer.UpdatePointCloud(points, colors); //actualiza la visualización grafica con esas posiciones y colores
            }

            
        }
    }
}

