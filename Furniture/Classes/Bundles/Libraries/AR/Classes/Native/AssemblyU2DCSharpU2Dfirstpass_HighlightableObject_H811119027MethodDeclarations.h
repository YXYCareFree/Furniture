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

// HighlightableObject/HighlightingRendererCache
struct HighlightingRendererCache_t811119027;
// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;
// UnityEngine.Material
struct Material_t193706927;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Renderer257310565.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Void HighlightableObject/HighlightingRendererCache::.ctor(UnityEngine.Renderer,UnityEngine.Material[],UnityEngine.Material,System.Boolean)
extern "C"  void HighlightingRendererCache__ctor_m306971187 (HighlightingRendererCache_t811119027 * __this, Renderer_t257310565 * ___rend0, MaterialU5BU5D_t3123989686* ___mats1, Material_t193706927 * ___sharedOpaqueMaterial2, bool ___writeDepth3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject/HighlightingRendererCache::SetState(System.Boolean)
extern "C"  void HighlightingRendererCache_SetState_m2206594102 (HighlightingRendererCache_t811119027 * __this, bool ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject/HighlightingRendererCache::SetColorForTransparent(UnityEngine.Color)
extern "C"  void HighlightingRendererCache_SetColorForTransparent_m3197371130 (HighlightingRendererCache_t811119027 * __this, Color_t2020392075  ___clr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
