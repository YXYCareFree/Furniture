#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HighlightingEventHandler
struct HighlightingEventHandler_t3695243984;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Material
struct Material_t193706927;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingEffect
struct  HighlightingEffect_t3978091441  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 HighlightingEffect::stencilZBufferDepth
	int32_t ___stencilZBufferDepth_3;
	// System.Int32 HighlightingEffect::_downsampleFactor
	int32_t ____downsampleFactor_4;
	// System.Int32 HighlightingEffect::iterations
	int32_t ___iterations_5;
	// System.Single HighlightingEffect::blurMinSpread
	float ___blurMinSpread_6;
	// System.Single HighlightingEffect::blurSpread
	float ___blurSpread_7;
	// System.Single HighlightingEffect::_blurIntensity
	float ____blurIntensity_8;
	// System.Int32 HighlightingEffect::layerMask
	int32_t ___layerMask_9;
	// UnityEngine.GameObject HighlightingEffect::go
	GameObject_t1756533147 * ___go_10;
	// UnityEngine.GameObject HighlightingEffect::shaderCameraGO
	GameObject_t1756533147 * ___shaderCameraGO_11;
	// UnityEngine.Camera HighlightingEffect::shaderCamera
	Camera_t189460977 * ___shaderCamera_12;
	// UnityEngine.RenderTexture HighlightingEffect::stencilBuffer
	RenderTexture_t2666733923 * ___stencilBuffer_13;
	// UnityEngine.Camera HighlightingEffect::refCam
	Camera_t189460977 * ___refCam_14;

public:
	inline static int32_t get_offset_of_stencilZBufferDepth_3() { return static_cast<int32_t>(offsetof(HighlightingEffect_t3978091441, ___stencilZBufferDepth_3)); }
	inline int32_t get_stencilZBufferDepth_3() const { return ___stencilZBufferDepth_3; }
	inline int32_t* get_address_of_stencilZBufferDepth_3() { return &___stencilZBufferDepth_3; }
	inline void set_stencilZBufferDepth_3(int32_t value)
	{
		___stencilZBufferDepth_3 = value;
	}

	inline static int32_t get_offset_of__downsampleFactor_4() { return static_cast<int32_t>(offsetof(HighlightingEffect_t3978091441, ____downsampleFactor_4)); }
	inline int32_t get__downsampleFactor_4() const { return ____downsampleFactor_4; }
	inline int32_t* get_address_of__downsampleFactor_4() { return &____downsampleFactor_4; }
	inline void set__downsampleFactor_4(int32_t value)
	{
		____downsampleFactor_4 = value;
	}

	inline static int32_t get_offset_of_iterations_5() { return static_cast<int32_t>(offsetof(HighlightingEffect_t3978091441, ___iterations_5)); }
	inline int32_t get_iterations_5() const { return ___iterations_5; }
	inline int32_t* get_address_of_iterations_5() { return &___iterations_5; }
	inline void set_iterations_5(int32_t value)
	{
		___iterations_5 = value;
	}

	inline static int32_t get_offset_of_blurMinSpread_6() { return static_cast<int32_t>(offsetof(HighlightingEffect_t3978091441, ___blurMinSpread_6)); }
	inline float get_blurMinSpread_6() const { return ___blurMinSpread_6; }
	inline float* get_address_of_blurMinSpread_6() { return &___blurMinSpread_6; }
	inline void set_blurMinSpread_6(float value)
	{
		___blurMinSpread_6 = value;
	}

	inline static int32_t get_offset_of_blurSpread_7() { return static_cast<int32_t>(offsetof(HighlightingEffect_t3978091441, ___blurSpread_7)); }
	inline float get_blurSpread_7() const { return ___blurSpread_7; }
	inline float* get_address_of_blurSpread_7() { return &___blurSpread_7; }
	inline void set_blurSpread_7(float value)
	{
		___blurSpread_7 = value;
	}

	inline static int32_t get_offset_of__blurIntensity_8() { return static_cast<int32_t>(offsetof(HighlightingEffect_t3978091441, ____blurIntensity_8)); }
	inline float get__blurIntensity_8() const { return ____blurIntensity_8; }
	inline float* get_address_of__blurIntensity_8() { return &____blurIntensity_8; }
	inline void set__blurIntensity_8(float value)
	{
		____blurIntensity_8 = value;
	}

	inline static int32_t get_offset_of_layerMask_9() { return static_cast<int32_t>(offsetof(HighlightingEffect_t3978091441, ___layerMask_9)); }
	inline int32_t get_layerMask_9() const { return ___layerMask_9; }
	inline int32_t* get_address_of_layerMask_9() { return &___layerMask_9; }
	inline void set_layerMask_9(int32_t value)
	{
		___layerMask_9 = value;
	}

	inline static int32_t get_offset_of_go_10() { return static_cast<int32_t>(offsetof(HighlightingEffect_t3978091441, ___go_10)); }
	inline GameObject_t1756533147 * get_go_10() const { return ___go_10; }
	inline GameObject_t1756533147 ** get_address_of_go_10() { return &___go_10; }
	inline void set_go_10(GameObject_t1756533147 * value)
	{
		___go_10 = value;
		Il2CppCodeGenWriteBarrier(&___go_10, value);
	}

	inline static int32_t get_offset_of_shaderCameraGO_11() { return static_cast<int32_t>(offsetof(HighlightingEffect_t3978091441, ___shaderCameraGO_11)); }
	inline GameObject_t1756533147 * get_shaderCameraGO_11() const { return ___shaderCameraGO_11; }
	inline GameObject_t1756533147 ** get_address_of_shaderCameraGO_11() { return &___shaderCameraGO_11; }
	inline void set_shaderCameraGO_11(GameObject_t1756533147 * value)
	{
		___shaderCameraGO_11 = value;
		Il2CppCodeGenWriteBarrier(&___shaderCameraGO_11, value);
	}

	inline static int32_t get_offset_of_shaderCamera_12() { return static_cast<int32_t>(offsetof(HighlightingEffect_t3978091441, ___shaderCamera_12)); }
	inline Camera_t189460977 * get_shaderCamera_12() const { return ___shaderCamera_12; }
	inline Camera_t189460977 ** get_address_of_shaderCamera_12() { return &___shaderCamera_12; }
	inline void set_shaderCamera_12(Camera_t189460977 * value)
	{
		___shaderCamera_12 = value;
		Il2CppCodeGenWriteBarrier(&___shaderCamera_12, value);
	}

	inline static int32_t get_offset_of_stencilBuffer_13() { return static_cast<int32_t>(offsetof(HighlightingEffect_t3978091441, ___stencilBuffer_13)); }
	inline RenderTexture_t2666733923 * get_stencilBuffer_13() const { return ___stencilBuffer_13; }
	inline RenderTexture_t2666733923 ** get_address_of_stencilBuffer_13() { return &___stencilBuffer_13; }
	inline void set_stencilBuffer_13(RenderTexture_t2666733923 * value)
	{
		___stencilBuffer_13 = value;
		Il2CppCodeGenWriteBarrier(&___stencilBuffer_13, value);
	}

	inline static int32_t get_offset_of_refCam_14() { return static_cast<int32_t>(offsetof(HighlightingEffect_t3978091441, ___refCam_14)); }
	inline Camera_t189460977 * get_refCam_14() const { return ___refCam_14; }
	inline Camera_t189460977 ** get_address_of_refCam_14() { return &___refCam_14; }
	inline void set_refCam_14(Camera_t189460977 * value)
	{
		___refCam_14 = value;
		Il2CppCodeGenWriteBarrier(&___refCam_14, value);
	}
};

struct HighlightingEffect_t3978091441_StaticFields
{
public:
	// HighlightingEventHandler HighlightingEffect::highlightingEvent
	HighlightingEventHandler_t3695243984 * ___highlightingEvent_2;
	// UnityEngine.Shader HighlightingEffect::_blurShader
	Shader_t2430389951 * ____blurShader_15;
	// UnityEngine.Shader HighlightingEffect::_compShader
	Shader_t2430389951 * ____compShader_16;
	// UnityEngine.Material HighlightingEffect::_blurMaterial
	Material_t193706927 * ____blurMaterial_17;
	// UnityEngine.Material HighlightingEffect::_compMaterial
	Material_t193706927 * ____compMaterial_18;

public:
	inline static int32_t get_offset_of_highlightingEvent_2() { return static_cast<int32_t>(offsetof(HighlightingEffect_t3978091441_StaticFields, ___highlightingEvent_2)); }
	inline HighlightingEventHandler_t3695243984 * get_highlightingEvent_2() const { return ___highlightingEvent_2; }
	inline HighlightingEventHandler_t3695243984 ** get_address_of_highlightingEvent_2() { return &___highlightingEvent_2; }
	inline void set_highlightingEvent_2(HighlightingEventHandler_t3695243984 * value)
	{
		___highlightingEvent_2 = value;
		Il2CppCodeGenWriteBarrier(&___highlightingEvent_2, value);
	}

	inline static int32_t get_offset_of__blurShader_15() { return static_cast<int32_t>(offsetof(HighlightingEffect_t3978091441_StaticFields, ____blurShader_15)); }
	inline Shader_t2430389951 * get__blurShader_15() const { return ____blurShader_15; }
	inline Shader_t2430389951 ** get_address_of__blurShader_15() { return &____blurShader_15; }
	inline void set__blurShader_15(Shader_t2430389951 * value)
	{
		____blurShader_15 = value;
		Il2CppCodeGenWriteBarrier(&____blurShader_15, value);
	}

	inline static int32_t get_offset_of__compShader_16() { return static_cast<int32_t>(offsetof(HighlightingEffect_t3978091441_StaticFields, ____compShader_16)); }
	inline Shader_t2430389951 * get__compShader_16() const { return ____compShader_16; }
	inline Shader_t2430389951 ** get_address_of__compShader_16() { return &____compShader_16; }
	inline void set__compShader_16(Shader_t2430389951 * value)
	{
		____compShader_16 = value;
		Il2CppCodeGenWriteBarrier(&____compShader_16, value);
	}

	inline static int32_t get_offset_of__blurMaterial_17() { return static_cast<int32_t>(offsetof(HighlightingEffect_t3978091441_StaticFields, ____blurMaterial_17)); }
	inline Material_t193706927 * get__blurMaterial_17() const { return ____blurMaterial_17; }
	inline Material_t193706927 ** get_address_of__blurMaterial_17() { return &____blurMaterial_17; }
	inline void set__blurMaterial_17(Material_t193706927 * value)
	{
		____blurMaterial_17 = value;
		Il2CppCodeGenWriteBarrier(&____blurMaterial_17, value);
	}

	inline static int32_t get_offset_of__compMaterial_18() { return static_cast<int32_t>(offsetof(HighlightingEffect_t3978091441_StaticFields, ____compMaterial_18)); }
	inline Material_t193706927 * get__compMaterial_18() const { return ____compMaterial_18; }
	inline Material_t193706927 ** get_address_of__compMaterial_18() { return &____compMaterial_18; }
	inline void set__compMaterial_18(Material_t193706927 * value)
	{
		____compMaterial_18 = value;
		Il2CppCodeGenWriteBarrier(&____compMaterial_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
