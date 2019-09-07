using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SixDegrees;

using UnityExtension;
using System.IO;

public class OBJSaver : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void SaveObj()
    {
        SDMesh sdMesh = FindObjectOfType<SDMesh>();

        MeshFilter[] meshFilters = sdMesh.GetComponentsInChildren<MeshFilter>();
        CombineInstance[] combine = new CombineInstance[meshFilters.Length];
        int i = 0;
        while(i < meshFilters.Length)
        {
            combine[i].mesh = meshFilters[i].sharedMesh;
            combine[i].transform = meshFilters[i].transform.localToWorldMatrix;
            i++;
        }
        Mesh combinedMesh = new Mesh();
        combinedMesh.CombineMeshes(combine);

        OBJData data = combinedMesh.EncodeOBJ();
        string filepath = Application.persistentDataPath + "/Obj_"
            + UnityEngine.Random.Range(0, 10000) + ".obj";
        var lStream = new FileStream(filepath, FileMode.Create);
        OBJLoader.ExportOBJ(data, lStream);
        lStream.Close();

    }
}
