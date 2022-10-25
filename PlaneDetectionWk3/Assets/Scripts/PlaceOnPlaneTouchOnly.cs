using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

[RequireComponent(typeof(ARRaycastManager))]

public class PlaceOnPlaneTouchOnly : MonoBehaviour
{
    public GameObject placedPrefab;
    private GameObject spawnedObject;
    private ARRaycastManager raycastManager;
    private Vector2 touchPosition;
    private List<ARRaycastHit> rayHits = new List<ARRaycastHit>();

    void Awake()
    {
        raycastManager = GetComponent<ARRaycastManager>();
    }

    void Update()
    {
        if (Input.touchCount > 0)
        {
            touchPosition = Input.GetTouch(0).position;
        }
        else
        {
            return;
        }

        // Place and move object
        if (raycastManager.Raycast(touchPosition, rayHits, TrackableType.PlaneWithinPolygon))
        {
            // Raycast hits are sorted by distance, so the first one
            // will be the closest hit.
            var firstHit = rayHits[0].pose;

            if (spawnedObject == null)
            {
                spawnedObject = Instantiate(placedPrefab, firstHit.position, firstHit.rotation);
            }
            else
            {
                spawnedObject.transform.position = firstHit.position;
            }

            // Ray raycast = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
            // RaycastHit raycastHit;
            // if (Physics.Raycast(raycast, out raycastHit))
            // {
            //     if (raycastHit.collider)
            //     {
            //         var mySphere = raycastHit;
            //         var scale = new Vector3(0.1f,0.1f,0.1f);
            //         scale += new Vector3(0.1f,0.1f,0.1f);
            //         mySphere.transform.localScale = scale;
            //     }

            // }
        }
    }
}
