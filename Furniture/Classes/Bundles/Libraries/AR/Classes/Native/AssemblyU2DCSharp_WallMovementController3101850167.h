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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WallMovementController
struct  WallMovementController_t3101850167  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean WallMovementController::moveX
	bool ___moveX_2;
	// System.Boolean WallMovementController::moveY
	bool ___moveY_3;
	// System.Boolean WallMovementController::moveZ
	bool ___moveZ_4;
	// UnityEngine.Vector3 WallMovementController::amplitude
	Vector3_t2243707580  ___amplitude_5;
	// UnityEngine.Transform WallMovementController::tr
	Transform_t3275118058 * ___tr_6;
	// System.Single WallMovementController::counter
	float ___counter_7;
	// UnityEngine.Vector3 WallMovementController::initialOffsets
	Vector3_t2243707580  ___initialOffsets_8;

public:
	inline static int32_t get_offset_of_moveX_2() { return static_cast<int32_t>(offsetof(WallMovementController_t3101850167, ___moveX_2)); }
	inline bool get_moveX_2() const { return ___moveX_2; }
	inline bool* get_address_of_moveX_2() { return &___moveX_2; }
	inline void set_moveX_2(bool value)
	{
		___moveX_2 = value;
	}

	inline static int32_t get_offset_of_moveY_3() { return static_cast<int32_t>(offsetof(WallMovementController_t3101850167, ___moveY_3)); }
	inline bool get_moveY_3() const { return ___moveY_3; }
	inline bool* get_address_of_moveY_3() { return &___moveY_3; }
	inline void set_moveY_3(bool value)
	{
		___moveY_3 = value;
	}

	inline static int32_t get_offset_of_moveZ_4() { return static_cast<int32_t>(offsetof(WallMovementController_t3101850167, ___moveZ_4)); }
	inline bool get_moveZ_4() const { return ___moveZ_4; }
	inline bool* get_address_of_moveZ_4() { return &___moveZ_4; }
	inline void set_moveZ_4(bool value)
	{
		___moveZ_4 = value;
	}

	inline static int32_t get_offset_of_amplitude_5() { return static_cast<int32_t>(offsetof(WallMovementController_t3101850167, ___amplitude_5)); }
	inline Vector3_t2243707580  get_amplitude_5() const { return ___amplitude_5; }
	inline Vector3_t2243707580 * get_address_of_amplitude_5() { return &___amplitude_5; }
	inline void set_amplitude_5(Vector3_t2243707580  value)
	{
		___amplitude_5 = value;
	}

	inline static int32_t get_offset_of_tr_6() { return static_cast<int32_t>(offsetof(WallMovementController_t3101850167, ___tr_6)); }
	inline Transform_t3275118058 * get_tr_6() const { return ___tr_6; }
	inline Transform_t3275118058 ** get_address_of_tr_6() { return &___tr_6; }
	inline void set_tr_6(Transform_t3275118058 * value)
	{
		___tr_6 = value;
		Il2CppCodeGenWriteBarrier(&___tr_6, value);
	}

	inline static int32_t get_offset_of_counter_7() { return static_cast<int32_t>(offsetof(WallMovementController_t3101850167, ___counter_7)); }
	inline float get_counter_7() const { return ___counter_7; }
	inline float* get_address_of_counter_7() { return &___counter_7; }
	inline void set_counter_7(float value)
	{
		___counter_7 = value;
	}

	inline static int32_t get_offset_of_initialOffsets_8() { return static_cast<int32_t>(offsetof(WallMovementController_t3101850167, ___initialOffsets_8)); }
	inline Vector3_t2243707580  get_initialOffsets_8() const { return ___initialOffsets_8; }
	inline Vector3_t2243707580 * get_address_of_initialOffsets_8() { return &___initialOffsets_8; }
	inline void set_initialOffsets_8(Vector3_t2243707580  value)
	{
		___initialOffsets_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
