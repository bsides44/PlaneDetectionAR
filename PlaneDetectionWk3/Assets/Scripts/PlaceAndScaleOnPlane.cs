using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

[RequireComponent(typeof(ARRaycastManager))]

public class PlaceAndScaleOnPlane : MonoBehaviour
{
    public GameObject placedPrefab;
    private GameObject spawnedObject;
    static List<ARRaycastHit> hits = new List<ARRaycastHit>();
    ARRaycastManager raycastTouchManager;
    private float initialDistance;
    private Vector3 initialScale;
    private float initialX;
    private float initialY;
    private float initialZ;
    private Vector2 touchPosition;

    void Awake()
    {
        raycastTouchManager = GetComponent<ARRaycastManager>();
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
        if (raycastTouchManager.Raycast(touchPosition, hits, TrackableType.PlaneWithinPolygon))
        {
            // Raycast hits are sorted by distance, so the first one
            // will be the closest hit.
            var hitPose = hits[0].pose;

            if (spawnedObject == null)
            {
                spawnedObject = Instantiate(placedPrefab, hitPose.position, hitPose.rotation);
            }
            else
            {
                if (Input.touchCount == 1)
                {
                    spawnedObject.transform.position = hitPose.position;
                }
            }
        }

        // Pinch to scale
        if (Input.touchCount == 2)
        {
            var firstTouch = Input.GetTouch(0);
            var secondTouch = Input.GetTouch(1);

            // if it's the end of the touch, do nothing
            if (firstTouch.phase == TouchPhase.Ended || firstTouch.phase == TouchPhase.Canceled || secondTouch.phase == TouchPhase.Ended || secondTouch.phase == TouchPhase.Canceled)
            {
                return;
            }

            // if it's the beginning of the touch, record initial touch positions
            if (firstTouch.phase == TouchPhase.Began || secondTouch.phase == TouchPhase.Began)
            {
                initialDistance = Vector2.Distance(firstTouch.position, secondTouch.position);
                initialScale = spawnedObject.transform.localScale;

                initialX = Vector3.SignedAngle(firstTouch.position, secondTouch.position, Vector3.right);
                initialY = Vector3.SignedAngle(firstTouch.position, secondTouch.position, Vector3.up);
                initialZ = Vector3.SignedAngle(firstTouch.position, secondTouch.position, Vector3.forward);
            }
            // as the touch moves, record current touch positions
            else
            {
                var currentDistance = Vector2.Distance(firstTouch.position, secondTouch.position);

                var currentX = Vector3.SignedAngle(firstTouch.position, secondTouch.position, Vector3.right);
                var currentY = Vector3.SignedAngle(firstTouch.position, secondTouch.position, Vector3.up);
                var currentZ = Vector3.SignedAngle(firstTouch.position, secondTouch.position, Vector3.forward);

                // if touch is too small it's probably accidental, do nothing
                if (initialDistance < 1)
                {
                    return;
                };

                // scale on pinch
                var scaleFactor = currentDistance / initialDistance;
                spawnedObject.transform.localScale = initialScale * scaleFactor;

                // rotate on pinch. 
                var rotX = Mathf.Clamp((initialX + currentX), 0, 360);
                var rotY = Mathf.Clamp((initialY + currentY), 0, 360);
                var rotZ = Mathf.Clamp((initialZ + currentZ), 0, 360);
                spawnedObject.transform.localEulerAngles = new Vector3(rotZ, rotX, rotY);
            
                // To be more usable you probably only want the user to be able to rotate the model on one axis, most likely the x axis.
                // The code below will achieve this. Change localAngle.y to localAngle.x or localAngle.z to rotate on a diferent axis.
                // Delete the 'rotate on pinch' code and use the below code instead by removing the // from before the lines of code.
                
                // float rotateSpeed = 0.09f;
                // Vector3 localAngle = spawnedObject.transform.localEulerAngles;
                // localAngle.y -= rotateSpeed * firstTouch.deltaPosition.x;
                // spawnedObject.transform.localEulerAngles = localAngle;
            }
        }
    }
}
