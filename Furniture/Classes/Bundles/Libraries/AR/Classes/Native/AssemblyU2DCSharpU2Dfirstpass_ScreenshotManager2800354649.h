#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t3226471752;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenshotManager
struct  ScreenshotManager_t2800354649  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct ScreenshotManager_t2800354649_StaticFields
{
public:
	// System.Action ScreenshotManager::ScreenshotFinishedSaving
	Action_t3226471752 * ___ScreenshotFinishedSaving_2;
	// System.Action ScreenshotManager::ImageFinishedSaving
	Action_t3226471752 * ___ImageFinishedSaving_3;

public:
	inline static int32_t get_offset_of_ScreenshotFinishedSaving_2() { return static_cast<int32_t>(offsetof(ScreenshotManager_t2800354649_StaticFields, ___ScreenshotFinishedSaving_2)); }
	inline Action_t3226471752 * get_ScreenshotFinishedSaving_2() const { return ___ScreenshotFinishedSaving_2; }
	inline Action_t3226471752 ** get_address_of_ScreenshotFinishedSaving_2() { return &___ScreenshotFinishedSaving_2; }
	inline void set_ScreenshotFinishedSaving_2(Action_t3226471752 * value)
	{
		___ScreenshotFinishedSaving_2 = value;
		Il2CppCodeGenWriteBarrier(&___ScreenshotFinishedSaving_2, value);
	}

	inline static int32_t get_offset_of_ImageFinishedSaving_3() { return static_cast<int32_t>(offsetof(ScreenshotManager_t2800354649_StaticFields, ___ImageFinishedSaving_3)); }
	inline Action_t3226471752 * get_ImageFinishedSaving_3() const { return ___ImageFinishedSaving_3; }
	inline Action_t3226471752 ** get_address_of_ImageFinishedSaving_3() { return &___ImageFinishedSaving_3; }
	inline void set_ImageFinishedSaving_3(Action_t3226471752 * value)
	{
		___ImageFinishedSaving_3 = value;
		Il2CppCodeGenWriteBarrier(&___ImageFinishedSaving_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
