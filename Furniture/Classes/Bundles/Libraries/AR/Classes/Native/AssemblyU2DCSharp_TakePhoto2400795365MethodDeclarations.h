#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// TakePhoto
struct TakePhoto_t2400795365;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.Camera
struct Camera_t189460977;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// System.Void TakePhoto::.ctor()
extern "C"  void TakePhoto__ctor_m2356124752 (TakePhoto_t2400795365 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TakePhoto::ScreenPicture()
extern "C"  void TakePhoto_ScreenPicture_m1471918438 (TakePhoto_t2400795365 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D TakePhoto::CaptureCamera(UnityEngine.Camera,UnityEngine.Rect)
extern "C"  Texture2D_t3542995729 * TakePhoto_CaptureCamera_m240086597 (TakePhoto_t2400795365 * __this, Camera_t189460977 * ___camera0, Rect_t3681755626  ___rect1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
