#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t189460977;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photo
struct  Photo_t3629507452  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera Photo::camera
	Camera_t189460977 * ___camera_2;

public:
	inline static int32_t get_offset_of_camera_2() { return static_cast<int32_t>(offsetof(Photo_t3629507452, ___camera_2)); }
	inline Camera_t189460977 * get_camera_2() const { return ___camera_2; }
	inline Camera_t189460977 ** get_address_of_camera_2() { return &___camera_2; }
	inline void set_camera_2(Camera_t189460977 * value)
	{
		___camera_2 = value;
		Il2CppCodeGenWriteBarrier(&___camera_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
