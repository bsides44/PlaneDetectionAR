﻿#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[19] = 
{
	{ 5877, 0,  3 } /*tableIndex: 0 */,
	{ 4221, 1,  3 } /*tableIndex: 1 */,
	{ 4221, 2,  4 } /*tableIndex: 2 */,
	{ 3271, 3,  5 } /*tableIndex: 3 */,
	{ 4221, 4,  6 } /*tableIndex: 4 */,
	{ 5877, 5,  6 } /*tableIndex: 5 */,
	{ 4995, 6,  6 } /*tableIndex: 6 */,
	{ 4984, 7,  6 } /*tableIndex: 7 */,
	{ 5304, 8,  6 } /*tableIndex: 8 */,
	{ 5304, 9,  6 } /*tableIndex: 9 */,
	{ 3910, 10,  6 } /*tableIndex: 10 */,
	{ 3910, 11,  6 } /*tableIndex: 11 */,
	{ 4221, 12,  7 } /*tableIndex: 12 */,
	{ 5304, 13,  7 } /*tableIndex: 13 */,
	{ 5304, 14,  7 } /*tableIndex: 14 */,
	{ 5869, 15,  7 } /*tableIndex: 15 */,
	{ 4221, 2,  8 } /*tableIndex: 16 */,
	{ 3180, 16,  9 } /*tableIndex: 17 */,
	{ 3180, 17,  9 } /*tableIndex: 18 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[18] = 
{
	"mousePosition",
	"camerasCount",
	"hitIndex",
	"camera",
	"displayIndex",
	"eventPosition",
	"rect",
	"screenProjectionRay",
	"projectionDirection",
	"distanceToClipPlane",
	"hit3D",
	"hit2D",
	"eventDisplayIndex",
	"w",
	"h",
	"pos",
	"mouseDownThisFrame",
	"mousePressed",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[21] = 
{
	{ 0, 0 } /* 0x06000001 UnityEngine.Vector2 UnityEngine.Touch::get_position() */,
	{ 0, 0 } /* 0x06000002 UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition() */,
	{ 0, 0 } /* 0x06000003 UnityEngine.TouchPhase UnityEngine.Touch::get_phase() */,
	{ 0, 0 } /* 0x06000004 UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry(UnityEngine.Camera,UnityEngine.Ray,System.Single,System.Int32) */,
	{ 0, 0 } /* 0x06000005 UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray,System.Single,System.Int32) */,
	{ 0, 0 } /* 0x06000006 UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32) */,
	{ 0, 0 } /* 0x06000007 UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry2D_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32) */,
	{ 0, 0 } /* 0x06000008 System.Boolean UnityEngine.Input::GetMouseButton(System.Int32) */,
	{ 0, 0 } /* 0x06000009 System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32) */,
	{ 0, 0 } /* 0x0600000A UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32) */,
	{ 0, 0 } /* 0x0600000B UnityEngine.Vector3 UnityEngine.Input::get_mousePosition() */,
	{ 0, 0 } /* 0x0600000C System.Int32 UnityEngine.Input::get_touchCount() */,
	{ 0, 0 } /* 0x0600000D System.Void UnityEngine.Input::GetTouch_Injected(System.Int32,UnityEngine.Touch&) */,
	{ 0, 0 } /* 0x0600000E System.Void UnityEngine.Input::get_mousePosition_Injected(UnityEngine.Vector3&) */,
	{ 0, 0 } /* 0x0600000F System.Void UnityEngine.SendMouseEvents::SetMouseMoved() */,
	{ 0, 17 } /* 0x06000010 System.Void UnityEngine.SendMouseEvents::DoSendMouseEvents(System.Int32) */,
	{ 17, 2 } /* 0x06000011 System.Void UnityEngine.SendMouseEvents::SendEvents(System.Int32,UnityEngine.SendMouseEvents/HitInfo) */,
	{ 0, 0 } /* 0x06000012 System.Void UnityEngine.SendMouseEvents::.cctor() */,
	{ 0, 0 } /* 0x06000013 System.Void UnityEngine.SendMouseEvents/HitInfo::SendMessage(System.String) */,
	{ 0, 0 } /* 0x06000014 System.Boolean UnityEngine.SendMouseEvents/HitInfo::op_Implicit(UnityEngine.SendMouseEvents/HitInfo) */,
	{ 0, 0 } /* 0x06000015 System.Boolean UnityEngine.SendMouseEvents/HitInfo::Compare(UnityEngine.SendMouseEvents/HitInfo,UnityEngine.SendMouseEvents/HitInfo) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_InputLegacyModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_InputLegacyModule[255] = 
{
	{ 11379, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 11379, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 11379, 1, 52, 52, 39, 40, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 11379, 1, 52, 52, 41, 59, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 11379, 1, 52, 52, 60, 61, 10, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 11380, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 11380, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 11380, 1, 54, 54, 44, 45, 0, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 11380, 1, 54, 54, 46, 69, 1, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 11380, 1, 54, 54, 70, 71, 10, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 11381, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 11381, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 11381, 1, 57, 57, 39, 40, 0, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 11381, 1, 57, 57, 41, 56, 1, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 11381, 1, 57, 57, 57, 58, 10, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 11393, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 15 } /* seqPointIndex: 15 */,
	{ 11393, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 11393, 2, 43, 43, 9, 10, 0, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 11393, 2, 44, 44, 13, 32, 1, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 11393, 2, 45, 45, 9, 10, 7, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 11394, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 11394, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 11394, 2, 49, 49, 9, 10, 0, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 11394, 2, 50, 50, 13, 53, 1, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 11394, 2, 52, 52, 13, 55, 7, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 11394, 2, 53, 53, 13, 71, 13, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 11394, 2, 53, 53, 0, 0, 37, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 11394, 2, 54, 54, 17, 54, 40, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 11394, 2, 57, 57, 13, 45, 51, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 11394, 2, 60, 60, 18, 34, 62, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 11394, 2, 60, 60, 0, 0, 64, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 11394, 2, 61, 61, 17, 56, 66, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 11394, 2, 60, 60, 68, 78, 83, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 11394, 2, 60, 60, 36, 66, 87, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 11394, 2, 60, 60, 0, 0, 99, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 11394, 2, 65, 65, 13, 30, 103, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 11394, 2, 65, 65, 0, 0, 113, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 11394, 2, 66, 66, 13, 14, 120, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 11394, 2, 67, 67, 17, 24, 121, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 11394, 2, 67, 67, 40, 49, 122, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 11394, 2, 67, 67, 0, 0, 132, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 11394, 2, 67, 67, 26, 36, 137, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 11394, 2, 68, 68, 17, 18, 144, kSequencePointKind_Normal, 0, 42 } /* seqPointIndex: 42 */,
	{ 11394, 2, 70, 70, 21, 94, 145, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 11394, 2, 70, 70, 0, 0, 179, kSequencePointKind_Normal, 0, 44 } /* seqPointIndex: 44 */,
	{ 11394, 2, 71, 71, 25, 34, 183, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 11394, 2, 73, 73, 21, 61, 188, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 11394, 2, 75, 75, 21, 80, 197, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 11394, 2, 76, 76, 21, 55, 205, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 11394, 2, 76, 76, 0, 0, 219, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 11394, 2, 77, 77, 21, 22, 226, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 11394, 2, 79, 79, 25, 70, 227, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 11394, 2, 82, 82, 25, 63, 237, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 11394, 2, 82, 82, 0, 0, 248, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 11394, 2, 83, 83, 29, 38, 252, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 11394, 2, 88, 88, 25, 48, 257, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 11394, 2, 89, 89, 25, 49, 265, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 11394, 2, 90, 90, 25, 88, 273, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 11394, 2, 90, 90, 0, 0, 294, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 11394, 2, 91, 91, 25, 26, 298, kSequencePointKind_Normal, 0, 59 } /* seqPointIndex: 59 */,
	{ 11394, 2, 92, 92, 29, 76, 299, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 11394, 2, 93, 93, 29, 77, 315, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 11394, 2, 94, 94, 25, 26, 331, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 11394, 2, 96, 96, 25, 93, 332, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 11394, 2, 99, 99, 25, 82, 359, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 11394, 2, 99, 99, 0, 0, 420, kSequencePointKind_Normal, 0, 65 } /* seqPointIndex: 65 */,
	{ 11394, 2, 100, 100, 29, 38, 424, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 11394, 2, 101, 101, 21, 22, 429, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 11394, 2, 103, 103, 21, 22, 432, kSequencePointKind_Normal, 0, 68 } /* seqPointIndex: 68 */,
	{ 11394, 2, 106, 106, 25, 55, 433, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 11394, 2, 107, 107, 21, 22, 436, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 11394, 2, 110, 110, 21, 49, 437, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 11394, 2, 111, 111, 21, 55, 446, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 11394, 2, 111, 111, 0, 0, 460, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 11394, 2, 112, 112, 25, 34, 464, kSequencePointKind_Normal, 0, 74 } /* seqPointIndex: 74 */,
	{ 11394, 2, 116, 116, 21, 47, 469, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 11394, 2, 116, 116, 0, 0, 481, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 11394, 2, 117, 117, 25, 34, 485, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 11394, 2, 120, 120, 21, 86, 490, kSequencePointKind_Normal, 0, 78 } /* seqPointIndex: 78 */,
	{ 11394, 2, 121, 121, 21, 79, 501, kSequencePointKind_Normal, 0, 79 } /* seqPointIndex: 79 */,
	{ 11394, 2, 122, 122, 21, 191, 515, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 11394, 2, 125, 125, 21, 153, 561, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 11394, 2, 126, 126, 21, 39, 589, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 11394, 2, 126, 126, 0, 0, 599, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 11394, 2, 127, 127, 21, 22, 603, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 11394, 2, 128, 128, 25, 74, 604, kSequencePointKind_Normal, 0, 85 } /* seqPointIndex: 85 */,
	{ 11394, 2, 129, 129, 25, 75, 622, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 11394, 2, 130, 130, 21, 22, 640, kSequencePointKind_Normal, 0, 87 } /* seqPointIndex: 87 */,
	{ 11394, 2, 134, 134, 26, 127, 643, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 11394, 2, 134, 134, 0, 0, 668, kSequencePointKind_Normal, 0, 89 } /* seqPointIndex: 89 */,
	{ 11394, 2, 135, 135, 21, 22, 672, kSequencePointKind_Normal, 0, 90 } /* seqPointIndex: 90 */,
	{ 11394, 2, 136, 136, 25, 73, 673, kSequencePointKind_Normal, 0, 91 } /* seqPointIndex: 91 */,
	{ 11394, 2, 137, 137, 25, 73, 690, kSequencePointKind_Normal, 0, 92 } /* seqPointIndex: 92 */,
	{ 11394, 2, 138, 138, 21, 22, 707, kSequencePointKind_Normal, 0, 93 } /* seqPointIndex: 93 */,
	{ 11394, 2, 141, 141, 21, 155, 708, kSequencePointKind_Normal, 0, 94 } /* seqPointIndex: 94 */,
	{ 11394, 2, 142, 142, 21, 39, 736, kSequencePointKind_Normal, 0, 95 } /* seqPointIndex: 95 */,
	{ 11394, 2, 142, 142, 0, 0, 746, kSequencePointKind_Normal, 0, 96 } /* seqPointIndex: 96 */,
	{ 11394, 2, 143, 143, 21, 22, 750, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
	{ 11394, 2, 144, 144, 25, 74, 751, kSequencePointKind_Normal, 0, 98 } /* seqPointIndex: 98 */,
	{ 11394, 2, 145, 145, 25, 75, 769, kSequencePointKind_Normal, 0, 99 } /* seqPointIndex: 99 */,
	{ 11394, 2, 146, 146, 21, 22, 787, kSequencePointKind_Normal, 0, 100 } /* seqPointIndex: 100 */,
	{ 11394, 2, 150, 150, 26, 127, 790, kSequencePointKind_Normal, 0, 101 } /* seqPointIndex: 101 */,
	{ 11394, 2, 150, 150, 0, 0, 815, kSequencePointKind_Normal, 0, 102 } /* seqPointIndex: 102 */,
	{ 11394, 2, 151, 151, 21, 22, 819, kSequencePointKind_Normal, 0, 103 } /* seqPointIndex: 103 */,
	{ 11394, 2, 152, 152, 25, 73, 820, kSequencePointKind_Normal, 0, 104 } /* seqPointIndex: 104 */,
	{ 11394, 2, 153, 153, 25, 73, 837, kSequencePointKind_Normal, 0, 105 } /* seqPointIndex: 105 */,
	{ 11394, 2, 154, 154, 21, 22, 854, kSequencePointKind_Normal, 0, 106 } /* seqPointIndex: 106 */,
	{ 11394, 2, 156, 156, 17, 18, 855, kSequencePointKind_Normal, 0, 107 } /* seqPointIndex: 107 */,
	{ 11394, 2, 156, 156, 0, 0, 856, kSequencePointKind_Normal, 0, 108 } /* seqPointIndex: 108 */,
	{ 11394, 2, 67, 67, 37, 39, 862, kSequencePointKind_Normal, 0, 109 } /* seqPointIndex: 109 */,
	{ 11394, 2, 157, 157, 13, 14, 873, kSequencePointKind_Normal, 0, 110 } /* seqPointIndex: 110 */,
	{ 11394, 2, 160, 160, 18, 34, 874, kSequencePointKind_Normal, 0, 111 } /* seqPointIndex: 111 */,
	{ 11394, 2, 160, 160, 0, 0, 877, kSequencePointKind_Normal, 0, 112 } /* seqPointIndex: 112 */,
	{ 11394, 2, 161, 161, 17, 62, 879, kSequencePointKind_Normal, 0, 113 } /* seqPointIndex: 113 */,
	{ 11394, 2, 160, 160, 68, 78, 899, kSequencePointKind_Normal, 0, 114 } /* seqPointIndex: 114 */,
	{ 11394, 2, 160, 160, 36, 66, 905, kSequencePointKind_Normal, 0, 115 } /* seqPointIndex: 115 */,
	{ 11394, 2, 160, 160, 0, 0, 918, kSequencePointKind_Normal, 0, 116 } /* seqPointIndex: 116 */,
	{ 11394, 2, 163, 163, 13, 33, 922, kSequencePointKind_Normal, 0, 117 } /* seqPointIndex: 117 */,
	{ 11394, 2, 164, 164, 9, 10, 928, kSequencePointKind_Normal, 0, 118 } /* seqPointIndex: 118 */,
	{ 11394, 2, 50, 50, 13, 53, 1, kSequencePointKind_StepOut, 0, 119 } /* seqPointIndex: 119 */,
	{ 11394, 2, 52, 52, 13, 55, 7, kSequencePointKind_StepOut, 0, 120 } /* seqPointIndex: 120 */,
	{ 11394, 2, 57, 57, 13, 45, 56, kSequencePointKind_StepOut, 0, 121 } /* seqPointIndex: 121 */,
	{ 11394, 2, 70, 70, 21, 94, 148, kSequencePointKind_StepOut, 0, 122 } /* seqPointIndex: 122 */,
	{ 11394, 2, 70, 70, 21, 94, 160, kSequencePointKind_StepOut, 0, 123 } /* seqPointIndex: 123 */,
	{ 11394, 2, 70, 70, 21, 94, 166, kSequencePointKind_StepOut, 0, 124 } /* seqPointIndex: 124 */,
	{ 11394, 2, 73, 73, 21, 61, 190, kSequencePointKind_StepOut, 0, 125 } /* seqPointIndex: 125 */,
	{ 11394, 2, 75, 75, 21, 80, 198, kSequencePointKind_StepOut, 0, 126 } /* seqPointIndex: 126 */,
	{ 11394, 2, 76, 76, 21, 55, 207, kSequencePointKind_StepOut, 0, 127 } /* seqPointIndex: 127 */,
	{ 11394, 2, 76, 76, 21, 55, 212, kSequencePointKind_StepOut, 0, 128 } /* seqPointIndex: 128 */,
	{ 11394, 2, 88, 88, 25, 48, 257, kSequencePointKind_StepOut, 0, 129 } /* seqPointIndex: 129 */,
	{ 11394, 2, 89, 89, 25, 49, 265, kSequencePointKind_StepOut, 0, 130 } /* seqPointIndex: 130 */,
	{ 11394, 2, 92, 92, 29, 76, 307, kSequencePointKind_StepOut, 0, 131 } /* seqPointIndex: 131 */,
	{ 11394, 2, 93, 93, 29, 77, 323, kSequencePointKind_StepOut, 0, 132 } /* seqPointIndex: 132 */,
	{ 11394, 2, 96, 96, 25, 93, 354, kSequencePointKind_StepOut, 0, 133 } /* seqPointIndex: 133 */,
	{ 11394, 2, 110, 110, 21, 49, 439, kSequencePointKind_StepOut, 0, 134 } /* seqPointIndex: 134 */,
	{ 11394, 2, 111, 111, 21, 55, 450, kSequencePointKind_StepOut, 0, 135 } /* seqPointIndex: 135 */,
	{ 11394, 2, 116, 116, 21, 47, 471, kSequencePointKind_StepOut, 0, 136 } /* seqPointIndex: 136 */,
	{ 11394, 2, 120, 120, 21, 86, 494, kSequencePointKind_StepOut, 0, 137 } /* seqPointIndex: 137 */,
	{ 11394, 2, 121, 121, 21, 79, 503, kSequencePointKind_StepOut, 0, 138 } /* seqPointIndex: 138 */,
	{ 11394, 2, 122, 122, 21, 191, 522, kSequencePointKind_StepOut, 0, 139 } /* seqPointIndex: 139 */,
	{ 11394, 2, 122, 122, 21, 191, 531, kSequencePointKind_StepOut, 0, 140 } /* seqPointIndex: 140 */,
	{ 11394, 2, 122, 122, 21, 191, 538, kSequencePointKind_StepOut, 0, 141 } /* seqPointIndex: 141 */,
	{ 11394, 2, 122, 122, 21, 191, 547, kSequencePointKind_StepOut, 0, 142 } /* seqPointIndex: 142 */,
	{ 11394, 2, 125, 125, 21, 153, 569, kSequencePointKind_StepOut, 0, 143 } /* seqPointIndex: 143 */,
	{ 11394, 2, 125, 125, 21, 153, 576, kSequencePointKind_StepOut, 0, 144 } /* seqPointIndex: 144 */,
	{ 11394, 2, 125, 125, 21, 153, 582, kSequencePointKind_StepOut, 0, 145 } /* seqPointIndex: 145 */,
	{ 11394, 2, 126, 126, 21, 39, 592, kSequencePointKind_StepOut, 0, 146 } /* seqPointIndex: 146 */,
	{ 11394, 2, 134, 134, 26, 127, 645, kSequencePointKind_StepOut, 0, 147 } /* seqPointIndex: 147 */,
	{ 11394, 2, 134, 134, 26, 127, 655, kSequencePointKind_StepOut, 0, 148 } /* seqPointIndex: 148 */,
	{ 11394, 2, 141, 141, 21, 155, 716, kSequencePointKind_StepOut, 0, 149 } /* seqPointIndex: 149 */,
	{ 11394, 2, 141, 141, 21, 155, 723, kSequencePointKind_StepOut, 0, 150 } /* seqPointIndex: 150 */,
	{ 11394, 2, 141, 141, 21, 155, 729, kSequencePointKind_StepOut, 0, 151 } /* seqPointIndex: 151 */,
	{ 11394, 2, 142, 142, 21, 39, 739, kSequencePointKind_StepOut, 0, 152 } /* seqPointIndex: 152 */,
	{ 11394, 2, 150, 150, 26, 127, 792, kSequencePointKind_StepOut, 0, 153 } /* seqPointIndex: 153 */,
	{ 11394, 2, 150, 150, 26, 127, 802, kSequencePointKind_StepOut, 0, 154 } /* seqPointIndex: 154 */,
	{ 11394, 2, 161, 161, 17, 62, 893, kSequencePointKind_StepOut, 0, 155 } /* seqPointIndex: 155 */,
	{ 11395, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 156 } /* seqPointIndex: 156 */,
	{ 11395, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 157 } /* seqPointIndex: 157 */,
	{ 11395, 2, 171, 171, 9, 10, 0, kSequencePointKind_Normal, 0, 158 } /* seqPointIndex: 158 */,
	{ 11395, 2, 173, 173, 13, 67, 1, kSequencePointKind_Normal, 0, 159 } /* seqPointIndex: 159 */,
	{ 11395, 2, 174, 174, 13, 57, 8, kSequencePointKind_Normal, 0, 160 } /* seqPointIndex: 160 */,
	{ 11395, 2, 176, 176, 13, 36, 15, kSequencePointKind_Normal, 0, 161 } /* seqPointIndex: 161 */,
	{ 11395, 2, 176, 176, 0, 0, 17, kSequencePointKind_Normal, 0, 162 } /* seqPointIndex: 162 */,
	{ 11395, 2, 177, 177, 13, 14, 20, kSequencePointKind_Normal, 0, 163 } /* seqPointIndex: 163 */,
	{ 11395, 2, 178, 178, 17, 25, 21, kSequencePointKind_Normal, 0, 164 } /* seqPointIndex: 164 */,
	{ 11395, 2, 178, 178, 0, 0, 28, kSequencePointKind_Normal, 0, 165 } /* seqPointIndex: 165 */,
	{ 11395, 2, 179, 179, 17, 18, 31, kSequencePointKind_Normal, 0, 166 } /* seqPointIndex: 166 */,
	{ 11395, 2, 180, 180, 21, 45, 32, kSequencePointKind_Normal, 0, 167 } /* seqPointIndex: 167 */,
	{ 11395, 2, 181, 181, 21, 66, 44, kSequencePointKind_Normal, 0, 168 } /* seqPointIndex: 168 */,
	{ 11395, 2, 182, 182, 17, 18, 66, kSequencePointKind_Normal, 0, 169 } /* seqPointIndex: 169 */,
	{ 11395, 2, 183, 183, 13, 14, 67, kSequencePointKind_Normal, 0, 170 } /* seqPointIndex: 170 */,
	{ 11395, 2, 184, 184, 18, 36, 73, kSequencePointKind_Normal, 0, 171 } /* seqPointIndex: 171 */,
	{ 11395, 2, 184, 184, 0, 0, 79, kSequencePointKind_Normal, 0, 172 } /* seqPointIndex: 172 */,
	{ 11395, 2, 185, 185, 13, 14, 83, kSequencePointKind_Normal, 0, 173 } /* seqPointIndex: 173 */,
	{ 11395, 2, 186, 186, 17, 39, 84, kSequencePointKind_Normal, 0, 174 } /* seqPointIndex: 174 */,
	{ 11395, 2, 186, 186, 0, 0, 102, kSequencePointKind_Normal, 0, 175 } /* seqPointIndex: 175 */,
	{ 11395, 2, 187, 187, 17, 18, 106, kSequencePointKind_Normal, 0, 176 } /* seqPointIndex: 176 */,
	{ 11395, 2, 189, 189, 21, 65, 107, kSequencePointKind_Normal, 0, 177 } /* seqPointIndex: 177 */,
	{ 11395, 2, 189, 189, 0, 0, 126, kSequencePointKind_Normal, 0, 178 } /* seqPointIndex: 178 */,
	{ 11395, 2, 190, 190, 25, 76, 130, kSequencePointKind_Normal, 0, 179 } /* seqPointIndex: 179 */,
	{ 11395, 2, 193, 193, 21, 64, 152, kSequencePointKind_Normal, 0, 180 } /* seqPointIndex: 180 */,
	{ 11395, 2, 194, 194, 21, 55, 174, kSequencePointKind_Normal, 0, 181 } /* seqPointIndex: 181 */,
	{ 11395, 2, 195, 195, 17, 18, 191, kSequencePointKind_Normal, 0, 182 } /* seqPointIndex: 182 */,
	{ 11395, 2, 196, 196, 13, 14, 192, kSequencePointKind_Normal, 0, 183 } /* seqPointIndex: 183 */,
	{ 11395, 2, 197, 197, 18, 40, 195, kSequencePointKind_Normal, 0, 184 } /* seqPointIndex: 184 */,
	{ 11395, 2, 197, 197, 0, 0, 213, kSequencePointKind_Normal, 0, 185 } /* seqPointIndex: 185 */,
	{ 11395, 2, 198, 198, 13, 14, 217, kSequencePointKind_Normal, 0, 186 } /* seqPointIndex: 186 */,
	{ 11395, 2, 199, 199, 17, 62, 218, kSequencePointKind_Normal, 0, 187 } /* seqPointIndex: 187 */,
	{ 11395, 2, 200, 200, 13, 14, 240, kSequencePointKind_Normal, 0, 188 } /* seqPointIndex: 188 */,
	{ 11395, 2, 204, 204, 13, 52, 241, kSequencePointKind_Normal, 0, 189 } /* seqPointIndex: 189 */,
	{ 11395, 2, 204, 204, 0, 0, 260, kSequencePointKind_Normal, 0, 190 } /* seqPointIndex: 190 */,
	{ 11395, 2, 205, 205, 13, 14, 264, kSequencePointKind_Normal, 0, 191 } /* seqPointIndex: 191 */,
	{ 11395, 2, 206, 206, 17, 25, 265, kSequencePointKind_Normal, 0, 192 } /* seqPointIndex: 192 */,
	{ 11395, 2, 206, 206, 0, 0, 273, kSequencePointKind_Normal, 0, 193 } /* seqPointIndex: 193 */,
	{ 11395, 2, 207, 207, 21, 52, 277, kSequencePointKind_Normal, 0, 194 } /* seqPointIndex: 194 */,
	{ 11395, 2, 208, 208, 13, 14, 290, kSequencePointKind_Normal, 0, 195 } /* seqPointIndex: 195 */,
	{ 11395, 2, 210, 210, 13, 14, 293, kSequencePointKind_Normal, 0, 196 } /* seqPointIndex: 196 */,
	{ 11395, 2, 211, 211, 17, 34, 294, kSequencePointKind_Normal, 0, 197 } /* seqPointIndex: 197 */,
	{ 11395, 2, 211, 211, 0, 0, 312, kSequencePointKind_Normal, 0, 198 } /* seqPointIndex: 198 */,
	{ 11395, 2, 212, 212, 17, 18, 316, kSequencePointKind_Normal, 0, 199 } /* seqPointIndex: 199 */,
	{ 11395, 2, 213, 213, 21, 61, 317, kSequencePointKind_Normal, 0, 200 } /* seqPointIndex: 200 */,
	{ 11395, 2, 214, 214, 17, 18, 339, kSequencePointKind_Normal, 0, 201 } /* seqPointIndex: 201 */,
	{ 11395, 2, 216, 216, 17, 25, 340, kSequencePointKind_Normal, 0, 202 } /* seqPointIndex: 202 */,
	{ 11395, 2, 216, 216, 0, 0, 348, kSequencePointKind_Normal, 0, 203 } /* seqPointIndex: 203 */,
	{ 11395, 2, 217, 217, 17, 18, 352, kSequencePointKind_Normal, 0, 204 } /* seqPointIndex: 204 */,
	{ 11395, 2, 218, 218, 21, 53, 353, kSequencePointKind_Normal, 0, 205 } /* seqPointIndex: 205 */,
	{ 11395, 2, 219, 219, 21, 52, 366, kSequencePointKind_Normal, 0, 206 } /* seqPointIndex: 206 */,
	{ 11395, 2, 220, 220, 17, 18, 379, kSequencePointKind_Normal, 0, 207 } /* seqPointIndex: 207 */,
	{ 11395, 2, 221, 221, 13, 14, 380, kSequencePointKind_Normal, 0, 208 } /* seqPointIndex: 208 */,
	{ 11395, 2, 222, 222, 13, 32, 381, kSequencePointKind_Normal, 0, 209 } /* seqPointIndex: 209 */,
	{ 11395, 2, 223, 223, 9, 10, 393, kSequencePointKind_Normal, 0, 210 } /* seqPointIndex: 210 */,
	{ 11395, 2, 173, 173, 13, 67, 2, kSequencePointKind_StepOut, 0, 211 } /* seqPointIndex: 211 */,
	{ 11395, 2, 174, 174, 13, 57, 9, kSequencePointKind_StepOut, 0, 212 } /* seqPointIndex: 212 */,
	{ 11395, 2, 178, 178, 17, 25, 22, kSequencePointKind_StepOut, 0, 213 } /* seqPointIndex: 213 */,
	{ 11395, 2, 181, 181, 21, 66, 60, kSequencePointKind_StepOut, 0, 214 } /* seqPointIndex: 214 */,
	{ 11395, 2, 186, 186, 17, 39, 95, kSequencePointKind_StepOut, 0, 215 } /* seqPointIndex: 215 */,
	{ 11395, 2, 189, 189, 21, 65, 119, kSequencePointKind_StepOut, 0, 216 } /* seqPointIndex: 216 */,
	{ 11395, 2, 190, 190, 25, 76, 146, kSequencePointKind_StepOut, 0, 217 } /* seqPointIndex: 217 */,
	{ 11395, 2, 193, 193, 21, 64, 168, kSequencePointKind_StepOut, 0, 218 } /* seqPointIndex: 218 */,
	{ 11395, 2, 197, 197, 18, 40, 206, kSequencePointKind_StepOut, 0, 219 } /* seqPointIndex: 219 */,
	{ 11395, 2, 199, 199, 17, 62, 234, kSequencePointKind_StepOut, 0, 220 } /* seqPointIndex: 220 */,
	{ 11395, 2, 204, 204, 13, 52, 253, kSequencePointKind_StepOut, 0, 221 } /* seqPointIndex: 221 */,
	{ 11395, 2, 206, 206, 17, 25, 266, kSequencePointKind_StepOut, 0, 222 } /* seqPointIndex: 222 */,
	{ 11395, 2, 207, 207, 21, 52, 284, kSequencePointKind_StepOut, 0, 223 } /* seqPointIndex: 223 */,
	{ 11395, 2, 211, 211, 17, 34, 305, kSequencePointKind_StepOut, 0, 224 } /* seqPointIndex: 224 */,
	{ 11395, 2, 213, 213, 21, 61, 333, kSequencePointKind_StepOut, 0, 225 } /* seqPointIndex: 225 */,
	{ 11395, 2, 216, 216, 17, 25, 341, kSequencePointKind_StepOut, 0, 226 } /* seqPointIndex: 226 */,
	{ 11395, 2, 218, 218, 21, 53, 360, kSequencePointKind_StepOut, 0, 227 } /* seqPointIndex: 227 */,
	{ 11395, 2, 219, 219, 21, 52, 373, kSequencePointKind_StepOut, 0, 228 } /* seqPointIndex: 228 */,
	{ 11396, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 229 } /* seqPointIndex: 229 */,
	{ 11396, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 230 } /* seqPointIndex: 230 */,
	{ 11396, 2, 34, 34, 9, 49, 0, kSequencePointKind_Normal, 0, 231 } /* seqPointIndex: 231 */,
	{ 11396, 2, 36, 36, 9, 95, 6, kSequencePointKind_Normal, 0, 232 } /* seqPointIndex: 232 */,
	{ 11396, 2, 37, 37, 9, 100, 17, kSequencePointKind_Normal, 0, 233 } /* seqPointIndex: 233 */,
	{ 11396, 2, 38, 38, 9, 98, 28, kSequencePointKind_Normal, 0, 234 } /* seqPointIndex: 234 */,
	{ 11397, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 235 } /* seqPointIndex: 235 */,
	{ 11397, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 236 } /* seqPointIndex: 236 */,
	{ 11397, 2, 16, 16, 13, 14, 0, kSequencePointKind_Normal, 0, 237 } /* seqPointIndex: 237 */,
	{ 11397, 2, 17, 17, 17, 88, 1, kSequencePointKind_Normal, 0, 238 } /* seqPointIndex: 238 */,
	{ 11397, 2, 18, 18, 13, 14, 16, kSequencePointKind_Normal, 0, 239 } /* seqPointIndex: 239 */,
	{ 11397, 2, 17, 17, 17, 88, 10, kSequencePointKind_StepOut, 0, 240 } /* seqPointIndex: 240 */,
	{ 11398, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 241 } /* seqPointIndex: 241 */,
	{ 11398, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 242 } /* seqPointIndex: 242 */,
	{ 11398, 2, 21, 21, 13, 14, 0, kSequencePointKind_Normal, 0, 243 } /* seqPointIndex: 243 */,
	{ 11398, 2, 22, 22, 17, 71, 1, kSequencePointKind_Normal, 0, 244 } /* seqPointIndex: 244 */,
	{ 11398, 2, 23, 23, 13, 14, 33, kSequencePointKind_Normal, 0, 245 } /* seqPointIndex: 245 */,
	{ 11398, 2, 22, 22, 17, 71, 8, kSequencePointKind_StepOut, 0, 246 } /* seqPointIndex: 246 */,
	{ 11398, 2, 22, 22, 17, 71, 22, kSequencePointKind_StepOut, 0, 247 } /* seqPointIndex: 247 */,
	{ 11399, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 248 } /* seqPointIndex: 248 */,
	{ 11399, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 249 } /* seqPointIndex: 249 */,
	{ 11399, 2, 26, 26, 13, 14, 0, kSequencePointKind_Normal, 0, 250 } /* seqPointIndex: 250 */,
	{ 11399, 2, 27, 27, 17, 77, 1, kSequencePointKind_Normal, 0, 251 } /* seqPointIndex: 251 */,
	{ 11399, 2, 28, 28, 13, 14, 43, kSequencePointKind_Normal, 0, 252 } /* seqPointIndex: 252 */,
	{ 11399, 2, 27, 27, 17, 77, 13, kSequencePointKind_StepOut, 0, 253 } /* seqPointIndex: 253 */,
	{ 11399, 2, 27, 27, 17, 77, 32, kSequencePointKind_StepOut, 0, 254 } /* seqPointIndex: 254 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_InputLegacyModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_InputLegacyModule[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "/Users/bokken/buildslave/unity/build/Modules/InputLegacy/Input.bindings.cs", { 135, 120, 3, 127, 179, 171, 94, 211, 49, 208, 248, 213, 236, 151, 196, 36} }, //1 
{ "/Users/bokken/buildslave/unity/build/Modules/InputLegacy/MouseEvents.cs", { 211, 124, 20, 176, 39, 243, 87, 111, 236, 93, 6, 170, 15, 236, 111, 188} }, //2 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[3] = 
{
	{ 2025, 1 },
	{ 2029, 2 },
	{ 2028, 2 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[12] = 
{
	{ 0, 12 },
	{ 0, 12 },
	{ 0, 12 },
	{ 0, 929 },
	{ 62, 103 },
	{ 137, 856 },
	{ 144, 856 },
	{ 226, 430 },
	{ 874, 922 },
	{ 0, 394 },
	{ 0, 35 },
	{ 0, 45 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[21] = 
{
	{ 12, 0, 1 } /* UnityEngine.Vector2 UnityEngine.Touch::get_position() */,
	{ 12, 1, 1 } /* UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition() */,
	{ 12, 2, 1 } /* UnityEngine.TouchPhase UnityEngine.Touch::get_phase() */,
	{ 0, 0, 0 } /* UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry(UnityEngine.Camera,UnityEngine.Ray,System.Single,System.Int32) */,
	{ 0, 0, 0 } /* UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray,System.Single,System.Int32) */,
	{ 0, 0, 0 } /* UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32) */,
	{ 0, 0, 0 } /* UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry2D_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.Input::GetMouseButton(System.Int32) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32) */,
	{ 0, 0, 0 } /* UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32) */,
	{ 0, 0, 0 } /* UnityEngine.Vector3 UnityEngine.Input::get_mousePosition() */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.Input::get_touchCount() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Input::GetTouch_Injected(System.Int32,UnityEngine.Touch&) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Input::get_mousePosition_Injected(UnityEngine.Vector3&) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.SendMouseEvents::SetMouseMoved() */,
	{ 929, 3, 6 } /* System.Void UnityEngine.SendMouseEvents::DoSendMouseEvents(System.Int32) */,
	{ 394, 9, 1 } /* System.Void UnityEngine.SendMouseEvents::SendEvents(System.Int32,UnityEngine.SendMouseEvents/HitInfo) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.SendMouseEvents::.cctor() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.SendMouseEvents/HitInfo::SendMessage(System.String) */,
	{ 35, 10, 1 } /* System.Boolean UnityEngine.SendMouseEvents/HitInfo::op_Implicit(UnityEngine.SendMouseEvents/HitInfo) */,
	{ 45, 11, 1 } /* System.Boolean UnityEngine.SendMouseEvents/HitInfo::Compare(UnityEngine.SendMouseEvents/HitInfo,UnityEngine.SendMouseEvents/HitInfo) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_InputLegacyModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_InputLegacyModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	255,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_InputLegacyModule,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	3,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
