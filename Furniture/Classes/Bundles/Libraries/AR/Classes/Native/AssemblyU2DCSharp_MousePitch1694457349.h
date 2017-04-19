#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MousePitch
struct  MousePitch_t1694457349  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject MousePitch::gameObj
	GameObject_t1756533147 * ___gameObj_2;
	// UnityEngine.GameObject MousePitch::hitObj
	GameObject_t1756533147 * ___hitObj_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MousePitch::recordObj
	List_1_t1125654279 * ___recordObj_4;

public:
	inline static int32_t get_offset_of_gameObj_2() { return static_cast<int32_t>(offsetof(MousePitch_t1694457349, ___gameObj_2)); }
	inline GameObject_t1756533147 * get_gameObj_2() const { return ___gameObj_2; }
	inline GameObject_t1756533147 ** get_address_of_gameObj_2() { return &___gameObj_2; }
	inline void set_gameObj_2(GameObject_t1756533147 * value)
	{
		___gameObj_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameObj_2, value);
	}

	inline static int32_t get_offset_of_hitObj_3() { return static_cast<int32_t>(offsetof(MousePitch_t1694457349, ___hitObj_3)); }
	inline GameObject_t1756533147 * get_hitObj_3() const { return ___hitObj_3; }
	inline GameObject_t1756533147 ** get_address_of_hitObj_3() { return &___hitObj_3; }
	inline void set_hitObj_3(GameObject_t1756533147 * value)
	{
		___hitObj_3 = value;
		Il2CppCodeGenWriteBarrier(&___hitObj_3, value);
	}

	inline static int32_t get_offset_of_recordObj_4() { return static_cast<int32_t>(offsetof(MousePitch_t1694457349, ___recordObj_4)); }
	inline List_1_t1125654279 * get_recordObj_4() const { return ___recordObj_4; }
	inline List_1_t1125654279 ** get_address_of_recordObj_4() { return &___recordObj_4; }
	inline void set_recordObj_4(List_1_t1125654279 * value)
	{
		___recordObj_4 = value;
		Il2CppCodeGenWriteBarrier(&___recordObj_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
