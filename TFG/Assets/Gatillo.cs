using UnityEngine;
using TMPro;
using RosMessageTypes.Std;
using Unity.Robotics.ROSTCPConnector;

public class GatilloPublisher : MonoBehaviour
{
    public TextMeshProUGUI etiqueta; //Para situarlo en un canvas en un texto
    public string topicName = "/aspirator/movimiento";

    private ROSConnection ros;
    private float estado_actual = 0; //Estado actual del botón
    //private OVRInput.Controller controller; //Decidir qué controlador vamos a usar
    [SerializeField] private OVRInput.Controller controller; //Decidir el controlador desde el dropdown 
    //private bool ultimo_estado = false; // Ultimo estado del boton

    void Start()
    {
        //Iniciamos publicador y suscriptor
        ros = ROSConnection.GetOrCreateInstance();
        ros.RegisterPublisher<Float32Msg>(topicName);
    }

    void Update()
    {
        // Obtener el valor del gatillo del controlador seleccionado (LTouch o RTouch)
        float valorGatillo = OVRInput.Get(OVRInput.Axis1D.PrimaryHandTrigger, controller);

        // Solo publicar si el valor ha cambiado significativamente 
        if (Mathf.Abs(valorGatillo - estado_actual) > 0.01f)
        {
            estado_actual = valorGatillo;
            Float32Msg msg = new Float32Msg(estado_actual);
            ros.Publish(topicName, msg);
            ActualizarEtiqueta();
        }
        
    }
        
    void ActualizarEtiqueta()
    {
        //Función para actualizar el texto en pantalla
        if (etiqueta != null)
        {
            etiqueta.text = "Gatillo: " + (estado_actual);
        }
    }
    public void ControllerDesdeDropdown(int index)
    {

        //función para seleccionar el controlador que queremos usar desde el dropdown de la configuracion
        if (index == 0)
        {
            controller = OVRInput.Controller.LTouch;
            Debug.Log("Controlador cambiado a IZQUIERDO");
        }
        else if (index == 1)
        {
            controller = OVRInput.Controller.RTouch;
            Debug.Log("Controlador cambiado a DERECHO");
        }
    }

}