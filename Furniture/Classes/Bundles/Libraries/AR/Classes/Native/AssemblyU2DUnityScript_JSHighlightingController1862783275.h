#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HighlightableObject
struct HighlightableObject_t2166055633;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JSHighlightingController
struct  JSHighlightingController_t1862783275  : public MonoBehaviour_t1158329972
{
public:
	// HighlightableObject JSHighlightingController::ho
	HighlightableObject_t2166055633 * ___ho_2;

public:
	inline static int32_t get_offset_of_ho_2() { return static_cast<int32_t>(offsetof(JSHighlightingController_t1862783275, ___ho_2)); }
	inline HighlightableObject_t2166055633 * get_ho_2() const { return ___ho_2; }
	inline HighlightableObject_t2166055633 ** get_address_of_ho_2() { return &___ho_2; }
	inline void set_ho_2(HighlightableObject_t2166055633 * value)
	{
		___ho_2 = value;
		Il2CppCodeGenWriteBarrier(&___ho_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
