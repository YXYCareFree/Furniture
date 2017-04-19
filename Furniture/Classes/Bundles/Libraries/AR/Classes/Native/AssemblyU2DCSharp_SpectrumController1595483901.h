#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_HighlightingController130024668.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpectrumController
struct  SpectrumController_t1595483901  : public HighlightingController_t130024668
{
public:
	// System.Single SpectrumController::speed
	float ___speed_3;
	// System.Int32 SpectrumController::period
	int32_t ___period_4;
	// System.Single SpectrumController::counter
	float ___counter_5;

public:
	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(SpectrumController_t1595483901, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_period_4() { return static_cast<int32_t>(offsetof(SpectrumController_t1595483901, ___period_4)); }
	inline int32_t get_period_4() const { return ___period_4; }
	inline int32_t* get_address_of_period_4() { return &___period_4; }
	inline void set_period_4(int32_t value)
	{
		___period_4 = value;
	}

	inline static int32_t get_offset_of_counter_5() { return static_cast<int32_t>(offsetof(SpectrumController_t1595483901, ___counter_5)); }
	inline float get_counter_5() const { return ___counter_5; }
	inline float* get_address_of_counter_5() { return &___counter_5; }
	inline void set_counter_5(float value)
	{
		___counter_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
