using UnityEngine;

public class ActivarCanvas : MonoBehaviour
{
    public GameObject objetoACactivar; //Objeto para activar o desactivar 

    public void Activar()
    {
        objetoACactivar.SetActive(true); //Objeto se pone visible
    }

    public void Desactivar()
    {
        objetoACactivar.SetActive(false); //Objeto se pone invisible
    }
}
