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

// HighlightingEffect
struct HighlightingEffect_t3978091441;
// HighlightingEventHandler
struct HighlightingEventHandler_t3695243984;
// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_HighlightingEventHan3695243984.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"

// System.Void HighlightingEffect::.ctor()
extern "C"  void HighlightingEffect__ctor_m1177035430 (HighlightingEffect_t3978091441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingEffect::add_highlightingEvent(HighlightingEventHandler)
extern "C"  void HighlightingEffect_add_highlightingEvent_m600773206 (Il2CppObject * __this /* static, unused */, HighlightingEventHandler_t3695243984 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingEffect::remove_highlightingEvent(HighlightingEventHandler)
extern "C"  void HighlightingEffect_remove_highlightingEvent_m4161904907 (Il2CppObject * __this /* static, unused */, HighlightingEventHandler_t3695243984 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader HighlightingEffect::get_blurShader()
extern "C"  Shader_t2430389951 * HighlightingEffect_get_blurShader_m1006793608 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader HighlightingEffect::get_compShader()
extern "C"  Shader_t2430389951 * HighlightingEffect_get_compShader_m1912416346 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material HighlightingEffect::get_blurMaterial()
extern "C"  Material_t193706927 * HighlightingEffect_get_blurMaterial_m3023299376 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material HighlightingEffect::get_compMaterial()
extern "C"  Material_t193706927 * HighlightingEffect_get_compMaterial_m3997307330 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingEffect::Awake()
extern "C"  void HighlightingEffect_Awake_m1803743387 (HighlightingEffect_t3978091441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingEffect::OnDisable()
extern "C"  void HighlightingEffect_OnDisable_m2033567599 (HighlightingEffect_t3978091441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingEffect::Start()
extern "C"  void HighlightingEffect_Start_m2615277754 (HighlightingEffect_t3978091441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingEffect::FourTapCone(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32)
extern "C"  void HighlightingEffect_FourTapCone_m1205690335 (HighlightingEffect_t3978091441 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___dest1, int32_t ___iteration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingEffect::DownSample4x(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void HighlightingEffect_DownSample4x_m2452800428 (HighlightingEffect_t3978091441 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingEffect::OnPreRender()
extern "C"  void HighlightingEffect_OnPreRender_m3102976980 (HighlightingEffect_t3978091441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void HighlightingEffect_OnRenderImage_m2058179730 (HighlightingEffect_t3978091441 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingEffect::.cctor()
extern "C"  void HighlightingEffect__cctor_m3737587157 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
