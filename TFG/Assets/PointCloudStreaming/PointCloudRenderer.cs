using UnityEngine;

[RequireComponent(typeof(MeshFilter), typeof(MeshRenderer))]
public class PointCloudRenderer : MonoBehaviour
{
    private Mesh mesh; //malla para dibujar los puntos

    public void UpdatePointCloud(Vector3[] vertices, Color[] colors)
    {
        if (mesh == null)
        {
            mesh = new Mesh();
            mesh.indexFormat = UnityEngine.Rendering.IndexFormat.UInt32; // Permite más de 65k puntos
            GetComponent<MeshFilter>().mesh = mesh; //asigna la malla al mesh filter


        }

        mesh.Clear(); //limpiar la malla

        if (vertices.Length == 0) return;

        int[] indices = new int[vertices.Length];
        for (int i = 0; i < vertices.Length; i++)
            indices[i] = i; //indices para saber qué vértices debe usar y en qué orden

        mesh.vertices = vertices; //asigna las posiciones
        mesh.colors = colors; //asigna los colores
        mesh.SetIndices(indices, MeshTopology.Points, 0); //renderiza puntos individuales

    }
}
