#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MouseMove
struct MouseMove_t2287476774;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MouseMove/<OnMouseDown>c__Iterator0
struct  U3COnMouseDownU3Ec__Iterator0_t1228113296  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 MouseMove/<OnMouseDown>c__Iterator0::<dist>__0
	Vector3_t2243707580  ___U3CdistU3E__0_0;
	// System.Single MouseMove/<OnMouseDown>c__Iterator0::<posX>__1
	float ___U3CposXU3E__1_1;
	// System.Single MouseMove/<OnMouseDown>c__Iterator0::<posY>__2
	float ___U3CposYU3E__2_2;
	// UnityEngine.Vector3 MouseMove/<OnMouseDown>c__Iterator0::<curPos>__3
	Vector3_t2243707580  ___U3CcurPosU3E__3_3;
	// UnityEngine.Vector3 MouseMove/<OnMouseDown>c__Iterator0::<woldPos>__4
	Vector3_t2243707580  ___U3CwoldPosU3E__4_4;
	// UnityEngine.Vector3 MouseMove/<OnMouseDown>c__Iterator0::<targetPos>__5
	Vector3_t2243707580  ___U3CtargetPosU3E__5_5;
	// MouseMove MouseMove/<OnMouseDown>c__Iterator0::$this
	MouseMove_t2287476774 * ___U24this_6;
	// System.Object MouseMove/<OnMouseDown>c__Iterator0::$current
	Il2CppObject * ___U24current_7;
	// System.Boolean MouseMove/<OnMouseDown>c__Iterator0::$disposing
	bool ___U24disposing_8;
	// System.Int32 MouseMove/<OnMouseDown>c__Iterator0::$PC
	int32_t ___U24PC_9;

public:
	inline static int32_t get_offset_of_U3CdistU3E__0_0() { return static_cast<int32_t>(offsetof(U3COnMouseDownU3Ec__Iterator0_t1228113296, ___U3CdistU3E__0_0)); }
	inline Vector3_t2243707580  get_U3CdistU3E__0_0() const { return ___U3CdistU3E__0_0; }
	inline Vector3_t2243707580 * get_address_of_U3CdistU3E__0_0() { return &___U3CdistU3E__0_0; }
	inline void set_U3CdistU3E__0_0(Vector3_t2243707580  value)
	{
		___U3CdistU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CposXU3E__1_1() { return static_cast<int32_t>(offsetof(U3COnMouseDownU3Ec__Iterator0_t1228113296, ___U3CposXU3E__1_1)); }
	inline float get_U3CposXU3E__1_1() const { return ___U3CposXU3E__1_1; }
	inline float* get_address_of_U3CposXU3E__1_1() { return &___U3CposXU3E__1_1; }
	inline void set_U3CposXU3E__1_1(float value)
	{
		___U3CposXU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U3CposYU3E__2_2() { return static_cast<int32_t>(offsetof(U3COnMouseDownU3Ec__Iterator0_t1228113296, ___U3CposYU3E__2_2)); }
	inline float get_U3CposYU3E__2_2() const { return ___U3CposYU3E__2_2; }
	inline float* get_address_of_U3CposYU3E__2_2() { return &___U3CposYU3E__2_2; }
	inline void set_U3CposYU3E__2_2(float value)
	{
		___U3CposYU3E__2_2 = value;
	}

	inline static int32_t get_offset_of_U3CcurPosU3E__3_3() { return static_cast<int32_t>(offsetof(U3COnMouseDownU3Ec__Iterator0_t1228113296, ___U3CcurPosU3E__3_3)); }
	inline Vector3_t2243707580  get_U3CcurPosU3E__3_3() const { return ___U3CcurPosU3E__3_3; }
	inline Vector3_t2243707580 * get_address_of_U3CcurPosU3E__3_3() { return &___U3CcurPosU3E__3_3; }
	inline void set_U3CcurPosU3E__3_3(Vector3_t2243707580  value)
	{
		___U3CcurPosU3E__3_3 = value;
	}

	inline static int32_t get_offset_of_U3CwoldPosU3E__4_4() { return static_cast<int32_t>(offsetof(U3COnMouseDownU3Ec__Iterator0_t1228113296, ___U3CwoldPosU3E__4_4)); }
	inline Vector3_t2243707580  get_U3CwoldPosU3E__4_4() const { return ___U3CwoldPosU3E__4_4; }
	inline Vector3_t2243707580 * get_address_of_U3CwoldPosU3E__4_4() { return &___U3CwoldPosU3E__4_4; }
	inline void set_U3CwoldPosU3E__4_4(Vector3_t2243707580  value)
	{
		___U3CwoldPosU3E__4_4 = value;
	}

	inline static int32_t get_offset_of_U3CtargetPosU3E__5_5() { return static_cast<int32_t>(offsetof(U3COnMouseDownU3Ec__Iterator0_t1228113296, ___U3CtargetPosU3E__5_5)); }
	inline Vector3_t2243707580  get_U3CtargetPosU3E__5_5() const { return ___U3CtargetPosU3E__5_5; }
	inline Vector3_t2243707580 * get_address_of_U3CtargetPosU3E__5_5() { return &___U3CtargetPosU3E__5_5; }
	inline void set_U3CtargetPosU3E__5_5(Vector3_t2243707580  value)
	{
		___U3CtargetPosU3E__5_5 = value;
	}

	inline static int32_t get_offset_of_U24this_6() { return static_cast<int32_t>(offsetof(U3COnMouseDownU3Ec__Iterator0_t1228113296, ___U24this_6)); }
	inline MouseMove_t2287476774 * get_U24this_6() const { return ___U24this_6; }
	inline MouseMove_t2287476774 ** get_address_of_U24this_6() { return &___U24this_6; }
	inline void set_U24this_6(MouseMove_t2287476774 * value)
	{
		___U24this_6 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_6, value);
	}

	inline static int32_t get_offset_of_U24current_7() { return static_cast<int32_t>(offsetof(U3COnMouseDownU3Ec__Iterator0_t1228113296, ___U24current_7)); }
	inline Il2CppObject * get_U24current_7() const { return ___U24current_7; }
	inline Il2CppObject ** get_address_of_U24current_7() { return &___U24current_7; }
	inline void set_U24current_7(Il2CppObject * value)
	{
		___U24current_7 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_7, value);
	}

	inline static int32_t get_offset_of_U24disposing_8() { return static_cast<int32_t>(offsetof(U3COnMouseDownU3Ec__Iterator0_t1228113296, ___U24disposing_8)); }
	inline bool get_U24disposing_8() const { return ___U24disposing_8; }
	inline bool* get_address_of_U24disposing_8() { return &___U24disposing_8; }
	inline void set_U24disposing_8(bool value)
	{
		___U24disposing_8 = value;
	}

	inline static int32_t get_offset_of_U24PC_9() { return static_cast<int32_t>(offsetof(U3COnMouseDownU3Ec__Iterator0_t1228113296, ___U24PC_9)); }
	inline int32_t get_U24PC_9() const { return ___U24PC_9; }
	inline int32_t* get_address_of_U24PC_9() { return &___U24PC_9; }
	inline void set_U24PC_9(int32_t value)
	{
		___U24PC_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
