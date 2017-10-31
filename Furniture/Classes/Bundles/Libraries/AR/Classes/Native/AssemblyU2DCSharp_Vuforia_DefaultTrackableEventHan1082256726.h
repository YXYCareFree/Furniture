#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1779888572;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DefaultTrackableEventHandler
struct  DefaultTrackableEventHandler_t1082256726  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Vuforia.DefaultTrackableEventHandler::measureVisible
	bool ___measureVisible_2;
	// System.Boolean Vuforia.DefaultTrackableEventHandler::test
	bool ___test_3;
	// Vuforia.TrackableBehaviour Vuforia.DefaultTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t1779888572 * ___mTrackableBehaviour_4;

public:
	inline static int32_t get_offset_of_measureVisible_2() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___measureVisible_2)); }
	inline bool get_measureVisible_2() const { return ___measureVisible_2; }
	inline bool* get_address_of_measureVisible_2() { return &___measureVisible_2; }
	inline void set_measureVisible_2(bool value)
	{
		___measureVisible_2 = value;
	}

	inline static int32_t get_offset_of_test_3() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___test_3)); }
	inline bool get_test_3() const { return ___test_3; }
	inline bool* get_address_of_test_3() { return &___test_3; }
	inline void set_test_3(bool value)
	{
		___test_3 = value;
	}

	inline static int32_t get_offset_of_mTrackableBehaviour_4() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___mTrackableBehaviour_4)); }
	inline TrackableBehaviour_t1779888572 * get_mTrackableBehaviour_4() const { return ___mTrackableBehaviour_4; }
	inline TrackableBehaviour_t1779888572 ** get_address_of_mTrackableBehaviour_4() { return &___mTrackableBehaviour_4; }
	inline void set_mTrackableBehaviour_4(TrackableBehaviour_t1779888572 * value)
	{
		___mTrackableBehaviour_4 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackableBehaviour_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
