using UnityEngine;
using TMPro;
using UnityEngine.UI; // Necesario para el Slider
using RosMessageTypes.Std;
using Unity.Robotics.ROSTCPConnector;

public class LevelSubscriber : MonoBehaviour
{
    public TextMeshProUGUI etiqueta;
    public Slider Slider; //Para obtener una representación visual en un slider del depósito
   

    private ROSConnection ros;

    void Start()
    {
        ros = ROSConnection.GetOrCreateInstance();
        ros.Subscribe<Int32Msg>("/aspirator/level", Callback);
        
    }

    void Callback(Int32Msg msg)
    {
        int level = msg.data;
        
        // Actualiza el texto con el nivel
        if (level == 100)
        {
            etiqueta.text = "DEPÓSITO LLENO";
        }
        else
        {
            etiqueta.text = "Depósito al " + level + "%";
        }

        // Actualiza la barra de progreso (Slider)
        Slider.value = level;  // El valor del slider va de 0 a 100

        // Funcion para cambiar el color del slider en funcion del nivel del aspirador
        ActualizarSlider(level);
       
    }
    void ActualizarSlider (int level)
    {
        if (level >= 75)
        {
            //Vemos el slider rojo
            Slider.fillRect.GetComponent<Image>().color = Color.red;
        }
        else if (level >= 50)
        {
            //Vemos el slider amarillo
            Slider.fillRect.GetComponent<Image>().color = Color.yellow;
        }
        else
        {
            //Vemos el slider verde
            Slider.fillRect.GetComponent<Image>().color = Color.green;
        }
    }
    
}


