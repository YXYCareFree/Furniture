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

// ScreenshotManager
struct ScreenshotManager_t2800354649;
// System.Action
struct Action_t3226471752;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Camera
struct Camera_t189460977;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"

// System.Void ScreenshotManager::.ctor()
extern "C"  void ScreenshotManager__ctor_m771826772 (ScreenshotManager_t2800354649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenshotManager::add_ScreenshotFinishedSaving(System.Action)
extern "C"  void ScreenshotManager_add_ScreenshotFinishedSaving_m2436805903 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenshotManager::remove_ScreenshotFinishedSaving(System.Action)
extern "C"  void ScreenshotManager_remove_ScreenshotFinishedSaving_m2681772056 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenshotManager::add_ImageFinishedSaving(System.Action)
extern "C"  void ScreenshotManager_add_ImageFinishedSaving_m1456778992 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenshotManager::remove_ImageFinishedSaving(System.Action)
extern "C"  void ScreenshotManager_remove_ImageFinishedSaving_m931912527 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ScreenshotManager::saveToGallery(System.String)
extern "C"  bool ScreenshotManager_saveToGallery_m72424934 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ScreenshotManager::Save(UnityEngine.Camera,System.String,System.String,System.Boolean)
extern "C"  Il2CppObject * ScreenshotManager_Save_m2023661786 (Il2CppObject * __this /* static, unused */, Camera_t189460977 * ___camera0, String_t* ___fileName1, String_t* ___albumName2, bool ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ScreenshotManager::SaveExisting(System.String,System.Boolean)
extern "C"  Il2CppObject * ScreenshotManager_SaveExisting_m3379456207 (Il2CppObject * __this /* static, unused */, String_t* ___filePath0, bool ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenshotManager::set_ScreenShotNumber(System.Int32)
extern "C"  void ScreenshotManager_set_ScreenShotNumber_m1841328157 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ScreenshotManager::get_ScreenShotNumber()
extern "C"  int32_t ScreenshotManager_get_ScreenShotNumber_m3405272896 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
