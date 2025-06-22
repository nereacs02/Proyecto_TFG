using UnityEngine;
using Unity.Robotics.ROSTCPConnector;
using RosMessageTypes.UnityRoboticsDemo;
using BoolUnity = RosMessageTypes.Std.BoolMsg;

public class NewBehaviourScript : MonoBehaviour
{
    ROSConnection ros;
    public string topicName = "oculus/hapticR/poseInc";
    public string topicName3 = "oculus/hapticR/pose";
    //public OVRInput.Controller controller;
    [SerializeField] private OVRInput.Controller controller;

    Vector3 pos, inc;


    // Publish the cube's position and rotation every N seconds
    public float publishMessageFrequency = 0.01f; //0.5f;

    // Used to determine how much time has elapsed since the last message was published
    private float timeElapsed;

    // Start is called before the first frame update
    void Start()
    {
        // start the ROS connection
        ros = ROSConnection.GetOrCreateInstance();
        ros.RegisterPublisher<PosRotMsg>(topicName);
        //ros.RegisterPublisher<BoolUnity>(topicName2);
        ros.RegisterPublisher<PosRotMsg>(topicName3);
        pos = OVRInput.GetLocalControllerPosition(controller);
    }

    // Update is called once per frame
    void Update()
    {

        timeElapsed += Time.deltaTime;

        inc = OVRInput.GetLocalControllerPosition(controller) - pos;
        pos = OVRInput.GetLocalControllerPosition(controller);

        // Quaternion rot = OVRInput.GetLocalControllerRotation(controller);

        if (timeElapsed > publishMessageFrequency)
        {

            PosRotMsg hapticPosIn = new PosRotMsg(
                inc.x,
                inc.y,
                inc.z,
                -1,
                -1,
                -1,
                -1
            );

            PosRotMsg hapticPos = new PosRotMsg(
                pos.x,
                pos.y,
                pos.z,
                -1,
                -1,
                -1,
                -1
            );


            ros.Publish(topicName, hapticPosIn);
            ros.Publish(topicName3, hapticPos);

            timeElapsed = 0;
        }
    }
    // Funcion para cambiar el controlador desde el Dropdown
    public void ControllerDesdeDropdown(int index)
    {
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
