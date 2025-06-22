using UnityEngine;
using TMPro;
using RosMessageTypes.Std;
using Unity.Robotics.ROSTCPConnector;

public class AspiratorStatusPublisher : MonoBehaviour
{
    public TextMeshProUGUI etiqueta; //Para situarlo en un canvas en un texto
    public string topicName = "/aspirator/status";

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
        ros.Subscribe<BoolMsg>(topicName, Callback);
        ActualizarEtiqueta();
    }

    void Update()
    {
        bool buttonA = OVRInput.Get(OVRInput.Button.One, controller);   // Botón A (mando derecho)
        bool buttonX = OVRInput.Get(OVRInput.Button.Three, controller);  // Botón X (mando izquierdo)

        bool boton_actual = buttonA || buttonX;

       
        // Detectar que se ha pulsado el botón
        if (boton_actual && !ultimo_estado) //se ha pulsado uno de los botones 
        {
            estado_actual = !estado_actual;
            BoolMsg msg = new BoolMsg (estado_actual);
            ros.Publish(topicName, msg);
            ActualizarEtiqueta();
        }

        // Guardar el estado actual de los botones combinados
        ultimo_estado = boton_actual;
    }

    void Callback(BoolMsg msg)
    {
        //El suscriptor recibe un mensaje y se actualiza en estado_actual
        estado_actual = msg.data;
        ActualizarEtiqueta();
    }


    void ActualizarEtiqueta()
    {
        //Función para actualizar el texto en pantalla
        if (etiqueta != null)
        {
            etiqueta.text = "Aspirador: " + (estado_actual ? "ON" : "OFF");
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