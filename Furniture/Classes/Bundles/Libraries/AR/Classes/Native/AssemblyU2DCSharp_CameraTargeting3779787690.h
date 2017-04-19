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
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraTargeting
struct  CameraTargeting_t3779787690  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.LayerMask CameraTargeting::targetingLayerMask
	LayerMask_t3188175821  ___targetingLayerMask_2;
	// System.Single CameraTargeting::targetingRayLength
	float ___targetingRayLength_3;
	// UnityEngine.Camera CameraTargeting::cam
	Camera_t189460977 * ___cam_4;

public:
	inline static int32_t get_offset_of_targetingLayerMask_2() { return static_cast<int32_t>(offsetof(CameraTargeting_t3779787690, ___targetingLayerMask_2)); }
	inline LayerMask_t3188175821  get_targetingLayerMask_2() const { return ___targetingLayerMask_2; }
	inline LayerMask_t3188175821 * get_address_of_targetingLayerMask_2() { return &___targetingLayerMask_2; }
	inline void set_targetingLayerMask_2(LayerMask_t3188175821  value)
	{
		___targetingLayerMask_2 = value;
	}

	inline static int32_t get_offset_of_targetingRayLength_3() { return static_cast<int32_t>(offsetof(CameraTargeting_t3779787690, ___targetingRayLength_3)); }
	inline float get_targetingRayLength_3() const { return ___targetingRayLength_3; }
	inline float* get_address_of_targetingRayLength_3() { return &___targetingRayLength_3; }
	inline void set_targetingRayLength_3(float value)
	{
		___targetingRayLength_3 = value;
	}

	inline static int32_t get_offset_of_cam_4() { return static_cast<int32_t>(offsetof(CameraTargeting_t3779787690, ___cam_4)); }
	inline Camera_t189460977 * get_cam_4() const { return ___cam_4; }
	inline Camera_t189460977 ** get_address_of_cam_4() { return &___cam_4; }
	inline void set_cam_4(Camera_t189460977 * value)
	{
		___cam_4 = value;
		Il2CppCodeGenWriteBarrier(&___cam_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
