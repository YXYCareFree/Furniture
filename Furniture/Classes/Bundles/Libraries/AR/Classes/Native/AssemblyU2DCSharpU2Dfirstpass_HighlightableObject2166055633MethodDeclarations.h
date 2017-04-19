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

// HighlightableObject
struct HighlightableObject_t2166055633;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t2810717544;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Void HighlightableObject::.ctor()
extern "C"  void HighlightableObject__ctor_m305000492 (HighlightableObject_t2166055633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material HighlightableObject::get_highlightingMaterial()
extern "C"  Material_t193706927 * HighlightableObject_get_highlightingMaterial_m4002960255 (HighlightableObject_t2166055633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material HighlightableObject::get_opaqueMaterial()
extern "C"  Material_t193706927 * HighlightableObject_get_opaqueMaterial_m2516259842 (HighlightableObject_t2166055633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material HighlightableObject::get_opaqueZMaterial()
extern "C"  Material_t193706927 * HighlightableObject_get_opaqueZMaterial_m306983476 (HighlightableObject_t2166055633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader HighlightableObject::get_opaqueShader()
extern "C"  Shader_t2430389951 * HighlightableObject_get_opaqueShader_m1165743426 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader HighlightableObject::get_transparentShader()
extern "C"  Shader_t2430389951 * HighlightableObject_get_transparentShader_m596789241 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader HighlightableObject::get_opaqueZShader()
extern "C"  Shader_t2430389951 * HighlightableObject_get_opaqueZShader_m145168652 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader HighlightableObject::get_transparentZShader()
extern "C"  Shader_t2430389951 * HighlightableObject_get_transparentZShader_m1832051259 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::OnEnable()
extern "C"  void HighlightableObject_OnEnable_m1737345200 (HighlightableObject_t2166055633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::OnDisable()
extern "C"  void HighlightableObject_OnDisable_m2474192895 (HighlightableObject_t2166055633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::ReinitMaterials()
extern "C"  void HighlightableObject_ReinitMaterials_m3872234959 (HighlightableObject_t2166055633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::RestoreMaterials()
extern "C"  void HighlightableObject_RestoreMaterials_m3120695506 (HighlightableObject_t2166055633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::OnParams(UnityEngine.Color)
extern "C"  void HighlightableObject_OnParams_m1556052965 (HighlightableObject_t2166055633 * __this, Color_t2020392075  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::On()
extern "C"  void HighlightableObject_On_m3683795439 (HighlightableObject_t2166055633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::On(UnityEngine.Color)
extern "C"  void HighlightableObject_On_m2632983049 (HighlightableObject_t2166055633 * __this, Color_t2020392075  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::FlashingParams(UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  void HighlightableObject_FlashingParams_m1429813287 (HighlightableObject_t2166055633 * __this, Color_t2020392075  ___color10, Color_t2020392075  ___color21, float ___freq2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::FlashingOn()
extern "C"  void HighlightableObject_FlashingOn_m459574203 (HighlightableObject_t2166055633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::FlashingOn(UnityEngine.Color,UnityEngine.Color)
extern "C"  void HighlightableObject_FlashingOn_m1643839371 (HighlightableObject_t2166055633 * __this, Color_t2020392075  ___color10, Color_t2020392075  ___color21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::FlashingOn(UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  void HighlightableObject_FlashingOn_m1943832074 (HighlightableObject_t2166055633 * __this, Color_t2020392075  ___color10, Color_t2020392075  ___color21, float ___freq2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::FlashingOn(System.Single)
extern "C"  void HighlightableObject_FlashingOn_m4162476746 (HighlightableObject_t2166055633 * __this, float ___freq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::FlashingOff()
extern "C"  void HighlightableObject_FlashingOff_m3946695317 (HighlightableObject_t2166055633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::FlashingSwitch()
extern "C"  void HighlightableObject_FlashingSwitch_m2333286412 (HighlightableObject_t2166055633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::ConstantParams(UnityEngine.Color)
extern "C"  void HighlightableObject_ConstantParams_m3181144528 (HighlightableObject_t2166055633 * __this, Color_t2020392075  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::ConstantOn()
extern "C"  void HighlightableObject_ConstantOn_m1084748433 (HighlightableObject_t2166055633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::ConstantOn(UnityEngine.Color)
extern "C"  void HighlightableObject_ConstantOn_m1128509747 (HighlightableObject_t2166055633 * __this, Color_t2020392075  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::ConstantOff()
extern "C"  void HighlightableObject_ConstantOff_m1371724735 (HighlightableObject_t2166055633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::ConstantSwitch()
extern "C"  void HighlightableObject_ConstantSwitch_m3022565190 (HighlightableObject_t2166055633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::ConstantOnImmediate()
extern "C"  void HighlightableObject_ConstantOnImmediate_m3271748086 (HighlightableObject_t2166055633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::ConstantOnImmediate(UnityEngine.Color)
extern "C"  void HighlightableObject_ConstantOnImmediate_m1701017030 (HighlightableObject_t2166055633 * __this, Color_t2020392075  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::ConstantOffImmediate()
extern "C"  void HighlightableObject_ConstantOffImmediate_m2255913032 (HighlightableObject_t2166055633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::ConstantSwitchImmediate()
extern "C"  void HighlightableObject_ConstantSwitchImmediate_m209523915 (HighlightableObject_t2166055633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::OccluderOn()
extern "C"  void HighlightableObject_OccluderOn_m324184132 (HighlightableObject_t2166055633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::OccluderOff()
extern "C"  void HighlightableObject_OccluderOff_m3721691036 (HighlightableObject_t2166055633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::OccluderSwitch()
extern "C"  void HighlightableObject_OccluderSwitch_m2786985805 (HighlightableObject_t2166055633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::Off()
extern "C"  void HighlightableObject_Off_m525183649 (HighlightableObject_t2166055633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::Die()
extern "C"  void HighlightableObject_Die_m3828138322 (HighlightableObject_t2166055633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::InitMaterials(System.Boolean)
extern "C"  void HighlightableObject_InitMaterials_m2757443859 (HighlightableObject_t2166055633 * __this, bool ___writeDepth0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::CacheRenderers(UnityEngine.Renderer[])
extern "C"  void HighlightableObject_CacheRenderers_m4222635816 (HighlightableObject_t2166055633 * __this, RendererU5BU5D_t2810717544* ___renderers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::SetColor(UnityEngine.Color)
extern "C"  void HighlightableObject_SetColor_m3567004391 (HighlightableObject_t2166055633 * __this, Color_t2020392075  ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::UpdateColors()
extern "C"  void HighlightableObject_UpdateColors_m4012669105 (HighlightableObject_t2166055633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::PerformTransition()
extern "C"  void HighlightableObject_PerformTransition_m3593132314 (HighlightableObject_t2166055633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::UpdateEventHandler(System.Boolean,System.Boolean)
extern "C"  void HighlightableObject_UpdateEventHandler_m6279447 (HighlightableObject_t2166055633 * __this, bool ___trigger0, bool ___writeDepth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator HighlightableObject::EndOfFrame()
extern "C"  Il2CppObject * HighlightableObject_EndOfFrame_m2168746059 (HighlightableObject_t2166055633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightableObject::.cctor()
extern "C"  void HighlightableObject__cctor_m1207455229 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
