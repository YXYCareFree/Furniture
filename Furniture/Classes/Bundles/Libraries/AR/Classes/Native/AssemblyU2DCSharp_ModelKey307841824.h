#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ModelKey
struct  ModelKey_t307841824  : public MonoBehaviour_t1158329972
{
public:
	// System.String ModelKey::key
	String_t* ___key_2;
	// System.Boolean ModelKey::iskey
	bool ___iskey_3;

public:
	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(ModelKey_t307841824, ___key_2)); }
	inline String_t* get_key_2() const { return ___key_2; }
	inline String_t** get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(String_t* value)
	{
		___key_2 = value;
		Il2CppCodeGenWriteBarrier(&___key_2, value);
	}

	inline static int32_t get_offset_of_iskey_3() { return static_cast<int32_t>(offsetof(ModelKey_t307841824, ___iskey_3)); }
	inline bool get_iskey_3() const { return ___iskey_3; }
	inline bool* get_address_of_iskey_3() { return &___iskey_3; }
	inline void set_iskey_3(bool value)
	{
		___iskey_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
