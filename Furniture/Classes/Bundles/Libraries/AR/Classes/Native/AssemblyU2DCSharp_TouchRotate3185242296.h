#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Touch407273883.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchRotate
struct  TouchRotate_t3185242296  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Touch TouchRotate::oldTouch_1
	Touch_t407273883  ___oldTouch_1_2;
	// UnityEngine.Touch TouchRotate::oldTouch_2
	Touch_t407273883  ___oldTouch_2_3;

public:
	inline static int32_t get_offset_of_oldTouch_1_2() { return static_cast<int32_t>(offsetof(TouchRotate_t3185242296, ___oldTouch_1_2)); }
	inline Touch_t407273883  get_oldTouch_1_2() const { return ___oldTouch_1_2; }
	inline Touch_t407273883 * get_address_of_oldTouch_1_2() { return &___oldTouch_1_2; }
	inline void set_oldTouch_1_2(Touch_t407273883  value)
	{
		___oldTouch_1_2 = value;
	}

	inline static int32_t get_offset_of_oldTouch_2_3() { return static_cast<int32_t>(offsetof(TouchRotate_t3185242296, ___oldTouch_2_3)); }
	inline Touch_t407273883  get_oldTouch_2_3() const { return ___oldTouch_2_3; }
	inline Touch_t407273883 * get_address_of_oldTouch_2_3() { return &___oldTouch_2_3; }
	inline void set_oldTouch_2_3(Touch_t407273883  value)
	{
		___oldTouch_2_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
