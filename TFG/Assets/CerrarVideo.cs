using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class CerrarVideo : MonoBehaviour
{
    public VideoPlayer Video;
   
    private void Awake ()
    {
        Video = GetComponent<VideoPlayer>();
        Video.loopPointReached += Terminar; //evento cuando el video termina
    }
   
    //Funcion para llamar desde el boton del menu
    public void RepoducirVideo()
    {
        gameObject.SetActive(true); //Activar el objeto donde est� el video
        Video.Play(); //Play al Video
    }

   void Terminar(VideoPlayer video)
    {
        gameObject.SetActive(false);
    }
    
    // Cierra el video desde un bot�n
    public void CerrarVideoManual()
    { 
        //Para el video y "esconde" el objeto
        Video.Stop();
        gameObject.SetActive(false);
    }
    
}
