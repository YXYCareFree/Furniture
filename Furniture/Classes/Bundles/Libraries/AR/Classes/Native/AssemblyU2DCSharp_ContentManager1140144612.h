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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1779888572;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ContentManager
struct  ContentManager_t1140144612  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ContentManager::AugmentationObject
	GameObject_t1756533147 * ___AugmentationObject_2;
	// UnityEngine.GameObject[] ContentManager::models
	GameObjectU5BU5D_t3057952154* ___models_3;
	// Vuforia.TrackableBehaviour ContentManager::trackableBehaviour
	TrackableBehaviour_t1779888572 * ___trackableBehaviour_4;

public:
	inline static int32_t get_offset_of_AugmentationObject_2() { return static_cast<int32_t>(offsetof(ContentManager_t1140144612, ___AugmentationObject_2)); }
	inline GameObject_t1756533147 * get_AugmentationObject_2() const { return ___AugmentationObject_2; }
	inline GameObject_t1756533147 ** get_address_of_AugmentationObject_2() { return &___AugmentationObject_2; }
	inline void set_AugmentationObject_2(GameObject_t1756533147 * value)
	{
		___AugmentationObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___AugmentationObject_2, value);
	}

	inline static int32_t get_offset_of_models_3() { return static_cast<int32_t>(offsetof(ContentManager_t1140144612, ___models_3)); }
	inline GameObjectU5BU5D_t3057952154* get_models_3() const { return ___models_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_models_3() { return &___models_3; }
	inline void set_models_3(GameObjectU5BU5D_t3057952154* value)
	{
		___models_3 = value;
		Il2CppCodeGenWriteBarrier(&___models_3, value);
	}

	inline static int32_t get_offset_of_trackableBehaviour_4() { return static_cast<int32_t>(offsetof(ContentManager_t1140144612, ___trackableBehaviour_4)); }
	inline TrackableBehaviour_t1779888572 * get_trackableBehaviour_4() const { return ___trackableBehaviour_4; }
	inline TrackableBehaviour_t1779888572 ** get_address_of_trackableBehaviour_4() { return &___trackableBehaviour_4; }
	inline void set_trackableBehaviour_4(TrackableBehaviour_t1779888572 * value)
	{
		___trackableBehaviour_4 = value;
		Il2CppCodeGenWriteBarrier(&___trackableBehaviour_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
