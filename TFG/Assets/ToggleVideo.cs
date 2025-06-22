using UnityEngine;
using UnityEngine.UI;

public class ToggleVideo : MonoBehaviour
{
    public Toggle miToggle; //Boton de toggle
    public GameObject objetoAMostrar; //Objeto que queremos mostrar o no al cambiar el toggle

    void Start()
    {
        // Ver si cambia el valor de toggle
        miToggle.onValueChanged.AddListener(ToggleCambiado);

        // Establecer el estado inicial por si ya viene activado/desactivado del objeto 
        objetoAMostrar.SetActive(miToggle.isOn);
    }

    void ToggleCambiado(bool isOn)
    {
        //Si OnToggle se activa se pone activo el objeto a mostrar
        objetoAMostrar.SetActive(isOn);
    }
}


