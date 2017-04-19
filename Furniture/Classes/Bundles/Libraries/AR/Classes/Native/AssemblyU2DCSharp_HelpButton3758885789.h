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

// HelpButton
struct  HelpButton_t3758885789  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject HelpButton::help
	GameObject_t1756533147 * ___help_2;

public:
	inline static int32_t get_offset_of_help_2() { return static_cast<int32_t>(offsetof(HelpButton_t3758885789, ___help_2)); }
	inline GameObject_t1756533147 * get_help_2() const { return ___help_2; }
	inline GameObject_t1756533147 ** get_address_of_help_2() { return &___help_2; }
	inline void set_help_2(GameObject_t1756533147 * value)
	{
		___help_2 = value;
		Il2CppCodeGenWriteBarrier(&___help_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
