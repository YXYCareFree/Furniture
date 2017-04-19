#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_HighlightingController130024668.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlashingController
struct  FlashingController_t3856563154  : public HighlightingController_t130024668
{
public:
	// UnityEngine.Color FlashingController::flashingStartColor
	Color_t2020392075  ___flashingStartColor_3;
	// UnityEngine.Color FlashingController::flashingEndColor
	Color_t2020392075  ___flashingEndColor_4;
	// System.Single FlashingController::flashingDelay
	float ___flashingDelay_5;
	// System.Single FlashingController::flashingFrequency
	float ___flashingFrequency_6;

public:
	inline static int32_t get_offset_of_flashingStartColor_3() { return static_cast<int32_t>(offsetof(FlashingController_t3856563154, ___flashingStartColor_3)); }
	inline Color_t2020392075  get_flashingStartColor_3() const { return ___flashingStartColor_3; }
	inline Color_t2020392075 * get_address_of_flashingStartColor_3() { return &___flashingStartColor_3; }
	inline void set_flashingStartColor_3(Color_t2020392075  value)
	{
		___flashingStartColor_3 = value;
	}

	inline static int32_t get_offset_of_flashingEndColor_4() { return static_cast<int32_t>(offsetof(FlashingController_t3856563154, ___flashingEndColor_4)); }
	inline Color_t2020392075  get_flashingEndColor_4() const { return ___flashingEndColor_4; }
	inline Color_t2020392075 * get_address_of_flashingEndColor_4() { return &___flashingEndColor_4; }
	inline void set_flashingEndColor_4(Color_t2020392075  value)
	{
		___flashingEndColor_4 = value;
	}

	inline static int32_t get_offset_of_flashingDelay_5() { return static_cast<int32_t>(offsetof(FlashingController_t3856563154, ___flashingDelay_5)); }
	inline float get_flashingDelay_5() const { return ___flashingDelay_5; }
	inline float* get_address_of_flashingDelay_5() { return &___flashingDelay_5; }
	inline void set_flashingDelay_5(float value)
	{
		___flashingDelay_5 = value;
	}

	inline static int32_t get_offset_of_flashingFrequency_6() { return static_cast<int32_t>(offsetof(FlashingController_t3856563154, ___flashingFrequency_6)); }
	inline float get_flashingFrequency_6() const { return ___flashingFrequency_6; }
	inline float* get_address_of_flashingFrequency_6() { return &___flashingFrequency_6; }
	inline void set_flashingFrequency_6(float value)
	{
		___flashingFrequency_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
