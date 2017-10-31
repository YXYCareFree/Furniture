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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ModifObjectSize
struct  ModifObjectSize_t425106011  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ModifObjectSize::Obj
	GameObject_t1756533147 * ___Obj_2;
	// UnityEngine.GameObject ModifObjectSize::gameObj
	GameObject_t1756533147 * ___gameObj_3;
	// UnityEngine.GameObject ModifObjectSize::slider
	GameObject_t1756533147 * ___slider_4;
	// System.Single ModifObjectSize::SliderDefaultValue
	float ___SliderDefaultValue_5;
	// System.Boolean ModifObjectSize::Hide
	bool ___Hide_6;
	// System.Boolean ModifObjectSize::showSlider
	bool ___showSlider_7;

public:
	inline static int32_t get_offset_of_Obj_2() { return static_cast<int32_t>(offsetof(ModifObjectSize_t425106011, ___Obj_2)); }
	inline GameObject_t1756533147 * get_Obj_2() const { return ___Obj_2; }
	inline GameObject_t1756533147 ** get_address_of_Obj_2() { return &___Obj_2; }
	inline void set_Obj_2(GameObject_t1756533147 * value)
	{
		___Obj_2 = value;
		Il2CppCodeGenWriteBarrier(&___Obj_2, value);
	}

	inline static int32_t get_offset_of_gameObj_3() { return static_cast<int32_t>(offsetof(ModifObjectSize_t425106011, ___gameObj_3)); }
	inline GameObject_t1756533147 * get_gameObj_3() const { return ___gameObj_3; }
	inline GameObject_t1756533147 ** get_address_of_gameObj_3() { return &___gameObj_3; }
	inline void set_gameObj_3(GameObject_t1756533147 * value)
	{
		___gameObj_3 = value;
		Il2CppCodeGenWriteBarrier(&___gameObj_3, value);
	}

	inline static int32_t get_offset_of_slider_4() { return static_cast<int32_t>(offsetof(ModifObjectSize_t425106011, ___slider_4)); }
	inline GameObject_t1756533147 * get_slider_4() const { return ___slider_4; }
	inline GameObject_t1756533147 ** get_address_of_slider_4() { return &___slider_4; }
	inline void set_slider_4(GameObject_t1756533147 * value)
	{
		___slider_4 = value;
		Il2CppCodeGenWriteBarrier(&___slider_4, value);
	}

	inline static int32_t get_offset_of_SliderDefaultValue_5() { return static_cast<int32_t>(offsetof(ModifObjectSize_t425106011, ___SliderDefaultValue_5)); }
	inline float get_SliderDefaultValue_5() const { return ___SliderDefaultValue_5; }
	inline float* get_address_of_SliderDefaultValue_5() { return &___SliderDefaultValue_5; }
	inline void set_SliderDefaultValue_5(float value)
	{
		___SliderDefaultValue_5 = value;
	}

	inline static int32_t get_offset_of_Hide_6() { return static_cast<int32_t>(offsetof(ModifObjectSize_t425106011, ___Hide_6)); }
	inline bool get_Hide_6() const { return ___Hide_6; }
	inline bool* get_address_of_Hide_6() { return &___Hide_6; }
	inline void set_Hide_6(bool value)
	{
		___Hide_6 = value;
	}

	inline static int32_t get_offset_of_showSlider_7() { return static_cast<int32_t>(offsetof(ModifObjectSize_t425106011, ___showSlider_7)); }
	inline bool get_showSlider_7() const { return ___showSlider_7; }
	inline bool* get_address_of_showSlider_7() { return &___showSlider_7; }
	inline void set_showSlider_7(bool value)
	{
		___showSlider_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
