#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<HighlightableObject/HighlightingRendererCache>
struct List_1_t180240159;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Shader
struct Shader_t2430389951;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightableObject
struct  HighlightableObject_t2166055633  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<HighlightableObject/HighlightingRendererCache> HighlightableObject::highlightableRenderers
	List_1_t180240159 * ___highlightableRenderers_7;
	// System.Int32[] HighlightableObject::layersCache
	Int32U5BU5D_t3030399641* ___layersCache_8;
	// System.Boolean HighlightableObject::materialsIsDirty
	bool ___materialsIsDirty_9;
	// System.Boolean HighlightableObject::currentState
	bool ___currentState_10;
	// UnityEngine.Color HighlightableObject::currentColor
	Color_t2020392075  ___currentColor_11;
	// System.Boolean HighlightableObject::transitionActive
	bool ___transitionActive_12;
	// System.Single HighlightableObject::transitionValue
	float ___transitionValue_13;
	// System.Single HighlightableObject::flashingFreq
	float ___flashingFreq_14;
	// System.Boolean HighlightableObject::once
	bool ___once_15;
	// UnityEngine.Color HighlightableObject::onceColor
	Color_t2020392075  ___onceColor_16;
	// System.Boolean HighlightableObject::flashing
	bool ___flashing_17;
	// UnityEngine.Color HighlightableObject::flashingColorMin
	Color_t2020392075  ___flashingColorMin_18;
	// UnityEngine.Color HighlightableObject::flashingColorMax
	Color_t2020392075  ___flashingColorMax_19;
	// System.Boolean HighlightableObject::constantly
	bool ___constantly_20;
	// UnityEngine.Color HighlightableObject::constantColor
	Color_t2020392075  ___constantColor_21;
	// System.Boolean HighlightableObject::occluder
	bool ___occluder_22;
	// System.Boolean HighlightableObject::zWrite
	bool ___zWrite_23;
	// UnityEngine.Color HighlightableObject::occluderColor
	Color_t2020392075  ___occluderColor_24;
	// UnityEngine.Material HighlightableObject::_opaqueMaterial
	Material_t193706927 * ____opaqueMaterial_25;
	// UnityEngine.Material HighlightableObject::_opaqueZMaterial
	Material_t193706927 * ____opaqueZMaterial_26;

public:
	inline static int32_t get_offset_of_highlightableRenderers_7() { return static_cast<int32_t>(offsetof(HighlightableObject_t2166055633, ___highlightableRenderers_7)); }
	inline List_1_t180240159 * get_highlightableRenderers_7() const { return ___highlightableRenderers_7; }
	inline List_1_t180240159 ** get_address_of_highlightableRenderers_7() { return &___highlightableRenderers_7; }
	inline void set_highlightableRenderers_7(List_1_t180240159 * value)
	{
		___highlightableRenderers_7 = value;
		Il2CppCodeGenWriteBarrier(&___highlightableRenderers_7, value);
	}

	inline static int32_t get_offset_of_layersCache_8() { return static_cast<int32_t>(offsetof(HighlightableObject_t2166055633, ___layersCache_8)); }
	inline Int32U5BU5D_t3030399641* get_layersCache_8() const { return ___layersCache_8; }
	inline Int32U5BU5D_t3030399641** get_address_of_layersCache_8() { return &___layersCache_8; }
	inline void set_layersCache_8(Int32U5BU5D_t3030399641* value)
	{
		___layersCache_8 = value;
		Il2CppCodeGenWriteBarrier(&___layersCache_8, value);
	}

	inline static int32_t get_offset_of_materialsIsDirty_9() { return static_cast<int32_t>(offsetof(HighlightableObject_t2166055633, ___materialsIsDirty_9)); }
	inline bool get_materialsIsDirty_9() const { return ___materialsIsDirty_9; }
	inline bool* get_address_of_materialsIsDirty_9() { return &___materialsIsDirty_9; }
	inline void set_materialsIsDirty_9(bool value)
	{
		___materialsIsDirty_9 = value;
	}

	inline static int32_t get_offset_of_currentState_10() { return static_cast<int32_t>(offsetof(HighlightableObject_t2166055633, ___currentState_10)); }
	inline bool get_currentState_10() const { return ___currentState_10; }
	inline bool* get_address_of_currentState_10() { return &___currentState_10; }
	inline void set_currentState_10(bool value)
	{
		___currentState_10 = value;
	}

	inline static int32_t get_offset_of_currentColor_11() { return static_cast<int32_t>(offsetof(HighlightableObject_t2166055633, ___currentColor_11)); }
	inline Color_t2020392075  get_currentColor_11() const { return ___currentColor_11; }
	inline Color_t2020392075 * get_address_of_currentColor_11() { return &___currentColor_11; }
	inline void set_currentColor_11(Color_t2020392075  value)
	{
		___currentColor_11 = value;
	}

	inline static int32_t get_offset_of_transitionActive_12() { return static_cast<int32_t>(offsetof(HighlightableObject_t2166055633, ___transitionActive_12)); }
	inline bool get_transitionActive_12() const { return ___transitionActive_12; }
	inline bool* get_address_of_transitionActive_12() { return &___transitionActive_12; }
	inline void set_transitionActive_12(bool value)
	{
		___transitionActive_12 = value;
	}

	inline static int32_t get_offset_of_transitionValue_13() { return static_cast<int32_t>(offsetof(HighlightableObject_t2166055633, ___transitionValue_13)); }
	inline float get_transitionValue_13() const { return ___transitionValue_13; }
	inline float* get_address_of_transitionValue_13() { return &___transitionValue_13; }
	inline void set_transitionValue_13(float value)
	{
		___transitionValue_13 = value;
	}

	inline static int32_t get_offset_of_flashingFreq_14() { return static_cast<int32_t>(offsetof(HighlightableObject_t2166055633, ___flashingFreq_14)); }
	inline float get_flashingFreq_14() const { return ___flashingFreq_14; }
	inline float* get_address_of_flashingFreq_14() { return &___flashingFreq_14; }
	inline void set_flashingFreq_14(float value)
	{
		___flashingFreq_14 = value;
	}

	inline static int32_t get_offset_of_once_15() { return static_cast<int32_t>(offsetof(HighlightableObject_t2166055633, ___once_15)); }
	inline bool get_once_15() const { return ___once_15; }
	inline bool* get_address_of_once_15() { return &___once_15; }
	inline void set_once_15(bool value)
	{
		___once_15 = value;
	}

	inline static int32_t get_offset_of_onceColor_16() { return static_cast<int32_t>(offsetof(HighlightableObject_t2166055633, ___onceColor_16)); }
	inline Color_t2020392075  get_onceColor_16() const { return ___onceColor_16; }
	inline Color_t2020392075 * get_address_of_onceColor_16() { return &___onceColor_16; }
	inline void set_onceColor_16(Color_t2020392075  value)
	{
		___onceColor_16 = value;
	}

	inline static int32_t get_offset_of_flashing_17() { return static_cast<int32_t>(offsetof(HighlightableObject_t2166055633, ___flashing_17)); }
	inline bool get_flashing_17() const { return ___flashing_17; }
	inline bool* get_address_of_flashing_17() { return &___flashing_17; }
	inline void set_flashing_17(bool value)
	{
		___flashing_17 = value;
	}

	inline static int32_t get_offset_of_flashingColorMin_18() { return static_cast<int32_t>(offsetof(HighlightableObject_t2166055633, ___flashingColorMin_18)); }
	inline Color_t2020392075  get_flashingColorMin_18() const { return ___flashingColorMin_18; }
	inline Color_t2020392075 * get_address_of_flashingColorMin_18() { return &___flashingColorMin_18; }
	inline void set_flashingColorMin_18(Color_t2020392075  value)
	{
		___flashingColorMin_18 = value;
	}

	inline static int32_t get_offset_of_flashingColorMax_19() { return static_cast<int32_t>(offsetof(HighlightableObject_t2166055633, ___flashingColorMax_19)); }
	inline Color_t2020392075  get_flashingColorMax_19() const { return ___flashingColorMax_19; }
	inline Color_t2020392075 * get_address_of_flashingColorMax_19() { return &___flashingColorMax_19; }
	inline void set_flashingColorMax_19(Color_t2020392075  value)
	{
		___flashingColorMax_19 = value;
	}

	inline static int32_t get_offset_of_constantly_20() { return static_cast<int32_t>(offsetof(HighlightableObject_t2166055633, ___constantly_20)); }
	inline bool get_constantly_20() const { return ___constantly_20; }
	inline bool* get_address_of_constantly_20() { return &___constantly_20; }
	inline void set_constantly_20(bool value)
	{
		___constantly_20 = value;
	}

	inline static int32_t get_offset_of_constantColor_21() { return static_cast<int32_t>(offsetof(HighlightableObject_t2166055633, ___constantColor_21)); }
	inline Color_t2020392075  get_constantColor_21() const { return ___constantColor_21; }
	inline Color_t2020392075 * get_address_of_constantColor_21() { return &___constantColor_21; }
	inline void set_constantColor_21(Color_t2020392075  value)
	{
		___constantColor_21 = value;
	}

	inline static int32_t get_offset_of_occluder_22() { return static_cast<int32_t>(offsetof(HighlightableObject_t2166055633, ___occluder_22)); }
	inline bool get_occluder_22() const { return ___occluder_22; }
	inline bool* get_address_of_occluder_22() { return &___occluder_22; }
	inline void set_occluder_22(bool value)
	{
		___occluder_22 = value;
	}

	inline static int32_t get_offset_of_zWrite_23() { return static_cast<int32_t>(offsetof(HighlightableObject_t2166055633, ___zWrite_23)); }
	inline bool get_zWrite_23() const { return ___zWrite_23; }
	inline bool* get_address_of_zWrite_23() { return &___zWrite_23; }
	inline void set_zWrite_23(bool value)
	{
		___zWrite_23 = value;
	}

	inline static int32_t get_offset_of_occluderColor_24() { return static_cast<int32_t>(offsetof(HighlightableObject_t2166055633, ___occluderColor_24)); }
	inline Color_t2020392075  get_occluderColor_24() const { return ___occluderColor_24; }
	inline Color_t2020392075 * get_address_of_occluderColor_24() { return &___occluderColor_24; }
	inline void set_occluderColor_24(Color_t2020392075  value)
	{
		___occluderColor_24 = value;
	}

	inline static int32_t get_offset_of__opaqueMaterial_25() { return static_cast<int32_t>(offsetof(HighlightableObject_t2166055633, ____opaqueMaterial_25)); }
	inline Material_t193706927 * get__opaqueMaterial_25() const { return ____opaqueMaterial_25; }
	inline Material_t193706927 ** get_address_of__opaqueMaterial_25() { return &____opaqueMaterial_25; }
	inline void set__opaqueMaterial_25(Material_t193706927 * value)
	{
		____opaqueMaterial_25 = value;
		Il2CppCodeGenWriteBarrier(&____opaqueMaterial_25, value);
	}

	inline static int32_t get_offset_of__opaqueZMaterial_26() { return static_cast<int32_t>(offsetof(HighlightableObject_t2166055633, ____opaqueZMaterial_26)); }
	inline Material_t193706927 * get__opaqueZMaterial_26() const { return ____opaqueZMaterial_26; }
	inline Material_t193706927 ** get_address_of__opaqueZMaterial_26() { return &____opaqueZMaterial_26; }
	inline void set__opaqueZMaterial_26(Material_t193706927 * value)
	{
		____opaqueZMaterial_26 = value;
		Il2CppCodeGenWriteBarrier(&____opaqueZMaterial_26, value);
	}
};

struct HighlightableObject_t2166055633_StaticFields
{
public:
	// System.Int32 HighlightableObject::highlightingLayer
	int32_t ___highlightingLayer_2;
	// System.Single HighlightableObject::constantOnSpeed
	float ___constantOnSpeed_3;
	// System.Single HighlightableObject::constantOffSpeed
	float ___constantOffSpeed_4;
	// System.Single HighlightableObject::transparentCutoff
	float ___transparentCutoff_5;
	// UnityEngine.Shader HighlightableObject::_opaqueShader
	Shader_t2430389951 * ____opaqueShader_27;
	// UnityEngine.Shader HighlightableObject::_transparentShader
	Shader_t2430389951 * ____transparentShader_28;
	// UnityEngine.Shader HighlightableObject::_opaqueZShader
	Shader_t2430389951 * ____opaqueZShader_29;
	// UnityEngine.Shader HighlightableObject::_transparentZShader
	Shader_t2430389951 * ____transparentZShader_30;

public:
	inline static int32_t get_offset_of_highlightingLayer_2() { return static_cast<int32_t>(offsetof(HighlightableObject_t2166055633_StaticFields, ___highlightingLayer_2)); }
	inline int32_t get_highlightingLayer_2() const { return ___highlightingLayer_2; }
	inline int32_t* get_address_of_highlightingLayer_2() { return &___highlightingLayer_2; }
	inline void set_highlightingLayer_2(int32_t value)
	{
		___highlightingLayer_2 = value;
	}

	inline static int32_t get_offset_of_constantOnSpeed_3() { return static_cast<int32_t>(offsetof(HighlightableObject_t2166055633_StaticFields, ___constantOnSpeed_3)); }
	inline float get_constantOnSpeed_3() const { return ___constantOnSpeed_3; }
	inline float* get_address_of_constantOnSpeed_3() { return &___constantOnSpeed_3; }
	inline void set_constantOnSpeed_3(float value)
	{
		___constantOnSpeed_3 = value;
	}

	inline static int32_t get_offset_of_constantOffSpeed_4() { return static_cast<int32_t>(offsetof(HighlightableObject_t2166055633_StaticFields, ___constantOffSpeed_4)); }
	inline float get_constantOffSpeed_4() const { return ___constantOffSpeed_4; }
	inline float* get_address_of_constantOffSpeed_4() { return &___constantOffSpeed_4; }
	inline void set_constantOffSpeed_4(float value)
	{
		___constantOffSpeed_4 = value;
	}

	inline static int32_t get_offset_of_transparentCutoff_5() { return static_cast<int32_t>(offsetof(HighlightableObject_t2166055633_StaticFields, ___transparentCutoff_5)); }
	inline float get_transparentCutoff_5() const { return ___transparentCutoff_5; }
	inline float* get_address_of_transparentCutoff_5() { return &___transparentCutoff_5; }
	inline void set_transparentCutoff_5(float value)
	{
		___transparentCutoff_5 = value;
	}

	inline static int32_t get_offset_of__opaqueShader_27() { return static_cast<int32_t>(offsetof(HighlightableObject_t2166055633_StaticFields, ____opaqueShader_27)); }
	inline Shader_t2430389951 * get__opaqueShader_27() const { return ____opaqueShader_27; }
	inline Shader_t2430389951 ** get_address_of__opaqueShader_27() { return &____opaqueShader_27; }
	inline void set__opaqueShader_27(Shader_t2430389951 * value)
	{
		____opaqueShader_27 = value;
		Il2CppCodeGenWriteBarrier(&____opaqueShader_27, value);
	}

	inline static int32_t get_offset_of__transparentShader_28() { return static_cast<int32_t>(offsetof(HighlightableObject_t2166055633_StaticFields, ____transparentShader_28)); }
	inline Shader_t2430389951 * get__transparentShader_28() const { return ____transparentShader_28; }
	inline Shader_t2430389951 ** get_address_of__transparentShader_28() { return &____transparentShader_28; }
	inline void set__transparentShader_28(Shader_t2430389951 * value)
	{
		____transparentShader_28 = value;
		Il2CppCodeGenWriteBarrier(&____transparentShader_28, value);
	}

	inline static int32_t get_offset_of__opaqueZShader_29() { return static_cast<int32_t>(offsetof(HighlightableObject_t2166055633_StaticFields, ____opaqueZShader_29)); }
	inline Shader_t2430389951 * get__opaqueZShader_29() const { return ____opaqueZShader_29; }
	inline Shader_t2430389951 ** get_address_of__opaqueZShader_29() { return &____opaqueZShader_29; }
	inline void set__opaqueZShader_29(Shader_t2430389951 * value)
	{
		____opaqueZShader_29 = value;
		Il2CppCodeGenWriteBarrier(&____opaqueZShader_29, value);
	}

	inline static int32_t get_offset_of__transparentZShader_30() { return static_cast<int32_t>(offsetof(HighlightableObject_t2166055633_StaticFields, ____transparentZShader_30)); }
	inline Shader_t2430389951 * get__transparentZShader_30() const { return ____transparentZShader_30; }
	inline Shader_t2430389951 ** get_address_of__transparentZShader_30() { return &____transparentZShader_30; }
	inline void set__transparentZShader_30(Shader_t2430389951 * value)
	{
		____transparentZShader_30 = value;
		Il2CppCodeGenWriteBarrier(&____transparentZShader_30, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
