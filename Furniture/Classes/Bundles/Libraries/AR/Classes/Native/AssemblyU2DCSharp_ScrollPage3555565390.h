#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.ScrollRect
struct ScrollRect_t1199013257;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1445631064;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_t1370245513;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScrollPage
struct  ScrollPage_t3555565390  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.ScrollRect ScrollPage::rect
	ScrollRect_t1199013257 * ___rect_2;
	// System.Collections.Generic.List`1<System.Single> ScrollPage::pages
	List_1_t1445631064 * ___pages_3;
	// System.Int32 ScrollPage::currentPageIndex
	int32_t ___currentPageIndex_4;
	// System.Single ScrollPage::smooting
	float ___smooting_5;
	// System.Single ScrollPage::targethorizontal
	float ___targethorizontal_6;
	// System.Boolean ScrollPage::isDrag
	bool ___isDrag_7;
	// System.Action`2<System.Int32,System.Int32> ScrollPage::OnPageChanged
	Action_2_t1370245513 * ___OnPageChanged_8;
	// System.Single ScrollPage::startime
	float ___startime_9;
	// System.Single ScrollPage::delay
	float ___delay_10;

public:
	inline static int32_t get_offset_of_rect_2() { return static_cast<int32_t>(offsetof(ScrollPage_t3555565390, ___rect_2)); }
	inline ScrollRect_t1199013257 * get_rect_2() const { return ___rect_2; }
	inline ScrollRect_t1199013257 ** get_address_of_rect_2() { return &___rect_2; }
	inline void set_rect_2(ScrollRect_t1199013257 * value)
	{
		___rect_2 = value;
		Il2CppCodeGenWriteBarrier(&___rect_2, value);
	}

	inline static int32_t get_offset_of_pages_3() { return static_cast<int32_t>(offsetof(ScrollPage_t3555565390, ___pages_3)); }
	inline List_1_t1445631064 * get_pages_3() const { return ___pages_3; }
	inline List_1_t1445631064 ** get_address_of_pages_3() { return &___pages_3; }
	inline void set_pages_3(List_1_t1445631064 * value)
	{
		___pages_3 = value;
		Il2CppCodeGenWriteBarrier(&___pages_3, value);
	}

	inline static int32_t get_offset_of_currentPageIndex_4() { return static_cast<int32_t>(offsetof(ScrollPage_t3555565390, ___currentPageIndex_4)); }
	inline int32_t get_currentPageIndex_4() const { return ___currentPageIndex_4; }
	inline int32_t* get_address_of_currentPageIndex_4() { return &___currentPageIndex_4; }
	inline void set_currentPageIndex_4(int32_t value)
	{
		___currentPageIndex_4 = value;
	}

	inline static int32_t get_offset_of_smooting_5() { return static_cast<int32_t>(offsetof(ScrollPage_t3555565390, ___smooting_5)); }
	inline float get_smooting_5() const { return ___smooting_5; }
	inline float* get_address_of_smooting_5() { return &___smooting_5; }
	inline void set_smooting_5(float value)
	{
		___smooting_5 = value;
	}

	inline static int32_t get_offset_of_targethorizontal_6() { return static_cast<int32_t>(offsetof(ScrollPage_t3555565390, ___targethorizontal_6)); }
	inline float get_targethorizontal_6() const { return ___targethorizontal_6; }
	inline float* get_address_of_targethorizontal_6() { return &___targethorizontal_6; }
	inline void set_targethorizontal_6(float value)
	{
		___targethorizontal_6 = value;
	}

	inline static int32_t get_offset_of_isDrag_7() { return static_cast<int32_t>(offsetof(ScrollPage_t3555565390, ___isDrag_7)); }
	inline bool get_isDrag_7() const { return ___isDrag_7; }
	inline bool* get_address_of_isDrag_7() { return &___isDrag_7; }
	inline void set_isDrag_7(bool value)
	{
		___isDrag_7 = value;
	}

	inline static int32_t get_offset_of_OnPageChanged_8() { return static_cast<int32_t>(offsetof(ScrollPage_t3555565390, ___OnPageChanged_8)); }
	inline Action_2_t1370245513 * get_OnPageChanged_8() const { return ___OnPageChanged_8; }
	inline Action_2_t1370245513 ** get_address_of_OnPageChanged_8() { return &___OnPageChanged_8; }
	inline void set_OnPageChanged_8(Action_2_t1370245513 * value)
	{
		___OnPageChanged_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnPageChanged_8, value);
	}

	inline static int32_t get_offset_of_startime_9() { return static_cast<int32_t>(offsetof(ScrollPage_t3555565390, ___startime_9)); }
	inline float get_startime_9() const { return ___startime_9; }
	inline float* get_address_of_startime_9() { return &___startime_9; }
	inline void set_startime_9(float value)
	{
		___startime_9 = value;
	}

	inline static int32_t get_offset_of_delay_10() { return static_cast<int32_t>(offsetof(ScrollPage_t3555565390, ___delay_10)); }
	inline float get_delay_10() const { return ___delay_10; }
	inline float* get_address_of_delay_10() { return &___delay_10; }
	inline void set_delay_10(float value)
	{
		___delay_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
