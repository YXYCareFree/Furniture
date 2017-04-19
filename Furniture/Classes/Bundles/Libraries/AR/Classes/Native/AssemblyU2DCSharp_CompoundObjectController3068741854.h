#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "AssemblyU2DCSharp_FlashingController3856563154.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CompoundObjectController
struct  CompoundObjectController_t3068741854  : public FlashingController_t3856563154
{
public:
	// UnityEngine.Transform CompoundObjectController::tr
	Transform_t3275118058 * ___tr_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> CompoundObjectController::objects
	List_1_t1125654279 * ___objects_8;
	// System.Int32 CompoundObjectController::currentShaderID
	int32_t ___currentShaderID_9;
	// System.String[] CompoundObjectController::shaderNames
	StringU5BU5D_t1642385972* ___shaderNames_10;
	// System.Int32 CompoundObjectController::ox
	int32_t ___ox_11;
	// System.Int32 CompoundObjectController::oy
	int32_t ___oy_12;

public:
	inline static int32_t get_offset_of_tr_7() { return static_cast<int32_t>(offsetof(CompoundObjectController_t3068741854, ___tr_7)); }
	inline Transform_t3275118058 * get_tr_7() const { return ___tr_7; }
	inline Transform_t3275118058 ** get_address_of_tr_7() { return &___tr_7; }
	inline void set_tr_7(Transform_t3275118058 * value)
	{
		___tr_7 = value;
		Il2CppCodeGenWriteBarrier(&___tr_7, value);
	}

	inline static int32_t get_offset_of_objects_8() { return static_cast<int32_t>(offsetof(CompoundObjectController_t3068741854, ___objects_8)); }
	inline List_1_t1125654279 * get_objects_8() const { return ___objects_8; }
	inline List_1_t1125654279 ** get_address_of_objects_8() { return &___objects_8; }
	inline void set_objects_8(List_1_t1125654279 * value)
	{
		___objects_8 = value;
		Il2CppCodeGenWriteBarrier(&___objects_8, value);
	}

	inline static int32_t get_offset_of_currentShaderID_9() { return static_cast<int32_t>(offsetof(CompoundObjectController_t3068741854, ___currentShaderID_9)); }
	inline int32_t get_currentShaderID_9() const { return ___currentShaderID_9; }
	inline int32_t* get_address_of_currentShaderID_9() { return &___currentShaderID_9; }
	inline void set_currentShaderID_9(int32_t value)
	{
		___currentShaderID_9 = value;
	}

	inline static int32_t get_offset_of_shaderNames_10() { return static_cast<int32_t>(offsetof(CompoundObjectController_t3068741854, ___shaderNames_10)); }
	inline StringU5BU5D_t1642385972* get_shaderNames_10() const { return ___shaderNames_10; }
	inline StringU5BU5D_t1642385972** get_address_of_shaderNames_10() { return &___shaderNames_10; }
	inline void set_shaderNames_10(StringU5BU5D_t1642385972* value)
	{
		___shaderNames_10 = value;
		Il2CppCodeGenWriteBarrier(&___shaderNames_10, value);
	}

	inline static int32_t get_offset_of_ox_11() { return static_cast<int32_t>(offsetof(CompoundObjectController_t3068741854, ___ox_11)); }
	inline int32_t get_ox_11() const { return ___ox_11; }
	inline int32_t* get_address_of_ox_11() { return &___ox_11; }
	inline void set_ox_11(int32_t value)
	{
		___ox_11 = value;
	}

	inline static int32_t get_offset_of_oy_12() { return static_cast<int32_t>(offsetof(CompoundObjectController_t3068741854, ___oy_12)); }
	inline int32_t get_oy_12() const { return ___oy_12; }
	inline int32_t* get_address_of_oy_12() { return &___oy_12; }
	inline void set_oy_12(int32_t value)
	{
		___oy_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
