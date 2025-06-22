using UnityEngine;
using TMPro;
using RosMessageTypes.Std;
using Unity.Robotics.ROSTCPConnector;

public class BotonBPublisher : MonoBehaviour
{
    public TextMeshProUGUI etiqueta; //Para situarlo en un canvas en un texto
    public string topicName = "/aspirator/led";

    private ROSConnection ros;
    private bool estado_actual = false; //Estado actual del botón
    //private OVRInput.Controller controller; //Decidir qué controlador vamos a usar
    [SerializeField] private OVRInput.Controller controller; //Decidir el controlador desde el dropdown 
    private bool ultimo_estado = false; // Ultimo estado del boton

    void Start()
    {
        //Iniciamos publicador y suscriptor
        ros = ROSConnection.GetOrCreateInstance();
        ros.RegisterPublisher<BoolMsg>(topicName);
    }

    void Update()
    {
        bool buttonB = OVRInput.Get(OVRInput.Button.Two, controller);   // Botón B (mando derecho)
        bool buttonY = OVRInput.Get(OVRInput.Button.Four, controller);  // Botón Y (mando izquierdo)

        bool boton_actual = buttonB || buttonY;



        // Detectar que se ha pulsado el botón
        if (boton_actual && !ultimo_estado) //se ha pulsado uno de los botones 
                                            
        {
            estado_actual = !estado_actual;
            BoolMsg msg = new BoolMsg(estado_actual);
            ros.Publish(topicName, msg);
            ActualizarEtiqueta();
        }

        // Guardar el estado actual de los botones combinados
        ultimo_estado = boton_actual;
    }




    void ActualizarEtiqueta()
    {
        //Función para actualizar el texto en pantalla
        if (etiqueta != null)
        {
            etiqueta.text = "LED: " + (estado_actual ? "ON" : "OFF");
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