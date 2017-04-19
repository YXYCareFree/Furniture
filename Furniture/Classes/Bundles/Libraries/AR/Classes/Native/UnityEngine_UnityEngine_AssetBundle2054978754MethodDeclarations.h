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

// UnityEngine.AssetBundle
struct AssetBundle_t2054978754;
// UnityEngine.Object
struct Object_t1021602117;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"

// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String)
extern "C"  Object_t1021602117 * AssetBundle_LoadAsset_m2358606850 (AssetBundle_t2054978754 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String,System.Type)
extern "C"  Object_t1021602117 * AssetBundle_LoadAsset_m866056071 (AssetBundle_t2054978754 * __this, String_t* ___name0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)
extern "C"  Object_t1021602117 * AssetBundle_LoadAsset_Internal_m2781704095 (AssetBundle_t2054978754 * __this, String_t* ___name0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AssetBundle::Unload(System.Boolean)
extern "C"  void AssetBundle_Unload_m167529087 (AssetBundle_t2054978754 * __this, bool ___unloadAllLoadedObjects0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.AssetBundle::GetAllAssetNames()
extern "C"  StringU5BU5D_t1642385972* AssetBundle_GetAllAssetNames_m106761685 (AssetBundle_t2054978754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
