﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3839502067;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t2105307154;
// System.String
struct String_t;
// UnityEngine.WebCamTexture
struct WebCamTexture_t1079476942;
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t2903637840;
// UnityEngine.WritableAttribute
struct WritableAttribute_t3715198420;
// UnityEngine.WWW
struct WWW_t2919945039;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.AssetBundle
struct AssetBundle_t2054978754;
// UnityEngine.YieldInstruction
struct YieldInstruction_t3462875981;
// UnityEngineInternal.GenericStack
struct GenericStack_t3718539591;
// System.Delegate
struct Delegate_t3022476291;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// UnityEngineInternal.TypeInferenceRuleAttribute
struct TypeInferenceRuleAttribute_t1390152093;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "UnityEngine_UnityEngine_WaitForSeconds3839502067.h"
#include "UnityEngine_UnityEngine_WaitForSeconds3839502067MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_YieldInstruction3462875981MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WaitForSecondsRealtime2105307154.h"
#include "UnityEngine_UnityEngine_WaitForSecondsRealtime2105307154MethodDeclarations.h"
#include "UnityEngine_UnityEngine_CustomYieldInstruction1786092740MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time31991979MethodDeclarations.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngine_WebCamDevice3983871389.h"
#include "UnityEngine_UnityEngine_WebCamDevice3983871389MethodDeclarations.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_WebCamTexture1079476942.h"
#include "UnityEngine_UnityEngine_WebCamTexture1079476942MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Texture2243626319MethodDeclarations.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_ArrayTypes.h"
#include "UnityEngine_UnityEngine_WritableAttribute3715198420.h"
#include "UnityEngine_UnityEngine_WritableAttribute3715198420MethodDeclarations.h"
#include "mscorlib_System_Attribute542643598MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WWW2919945039.h"
#include "UnityEngine_UnityEngine_WWW2919945039MethodDeclarations.h"
#include "mscorlib_System_Object2689449295MethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Byte3683104436.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_AssetBundle2054978754.h"
#include "UnityEngine_UnityEngine_YieldInstruction3462875981.h"
#include "UnityEngine_UnityEngineInternal_GenericStack3718539591.h"
#include "UnityEngine_UnityEngineInternal_GenericStack3718539591MethodDeclarations.h"
#include "mscorlib_System_Collections_Stack1043988394MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_MathfInternal715669973.h"
#include "UnityEngine_UnityEngineInternal_MathfInternal715669973MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtension4275971970.h"
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtension4275971970MethodDeclarations.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Delegate3022476291.h"
#include "mscorlib_System_Delegate3022476291MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_ScriptingUtils2804582268.h"
#include "UnityEngine_UnityEngineInternal_ScriptingUtils2804582268MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleA1390152093.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleA1390152093MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules1810425448.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules1810425448MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_WebRequestUtils4100941042.h"
#include "UnityEngine_UnityEngineInternal_WebRequestUtils4100941042MethodDeclarations.h"
#include "mscorlib_System_String2029220233MethodDeclarations.h"
#include "System_System_Uri19570940MethodDeclarations.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_Char3454481338.h"
#include "System_System_UriKind1128731744.h"
#include "System_System_Text_RegularExpressions_Regex1803876613MethodDeclarations.h"
#include "System_System_Text_RegularExpressions_Regex1803876613.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C"  void WaitForSeconds__ctor_m1990515539 (WaitForSeconds_t3839502067 * __this, float ___seconds0, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m2014522928(__this, /*hidden argument*/NULL);
		float L_0 = ___seconds0;
		__this->set_m_Seconds_0(L_0);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t3839502067_marshal_pinvoke(const WaitForSeconds_t3839502067& unmarshaled, WaitForSeconds_t3839502067_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Seconds_0 = unmarshaled.get_m_Seconds_0();
}
extern "C" void WaitForSeconds_t3839502067_marshal_pinvoke_back(const WaitForSeconds_t3839502067_marshaled_pinvoke& marshaled, WaitForSeconds_t3839502067& unmarshaled)
{
	float unmarshaled_m_Seconds_temp_0 = 0.0f;
	unmarshaled_m_Seconds_temp_0 = marshaled.___m_Seconds_0;
	unmarshaled.set_m_Seconds_0(unmarshaled_m_Seconds_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t3839502067_marshal_pinvoke_cleanup(WaitForSeconds_t3839502067_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t3839502067_marshal_com(const WaitForSeconds_t3839502067& unmarshaled, WaitForSeconds_t3839502067_marshaled_com& marshaled)
{
	marshaled.___m_Seconds_0 = unmarshaled.get_m_Seconds_0();
}
extern "C" void WaitForSeconds_t3839502067_marshal_com_back(const WaitForSeconds_t3839502067_marshaled_com& marshaled, WaitForSeconds_t3839502067& unmarshaled)
{
	float unmarshaled_m_Seconds_temp_0 = 0.0f;
	unmarshaled_m_Seconds_temp_0 = marshaled.___m_Seconds_0;
	unmarshaled.set_m_Seconds_0(unmarshaled_m_Seconds_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t3839502067_marshal_com_cleanup(WaitForSeconds_t3839502067_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
extern "C"  void WaitForSecondsRealtime__ctor_m1734539010 (WaitForSecondsRealtime_t2105307154 * __this, float ___time0, const MethodInfo* method)
{
	{
		CustomYieldInstruction__ctor_m1721050687(__this, /*hidden argument*/NULL);
		float L_0 = Time_get_realtimeSinceStartup_m357614587(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = ___time0;
		__this->set_waitTime_0(((float)((float)L_0+(float)L_1)));
		return;
	}
}
// System.Boolean UnityEngine.WaitForSecondsRealtime::get_keepWaiting()
extern "C"  bool WaitForSecondsRealtime_get_keepWaiting_m741039114 (WaitForSecondsRealtime_t2105307154 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	{
		float L_0 = Time_get_realtimeSinceStartup_m357614587(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = __this->get_waitTime_0();
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		goto IL_0014;
	}

IL_0014:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.String UnityEngine.WebCamDevice::get_name()
extern "C"  String_t* WebCamDevice_get_name_m1117076425 (WebCamDevice_t3983871389 * __this, const MethodInfo* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_Name_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
extern "C"  String_t* WebCamDevice_get_name_m1117076425_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	WebCamDevice_t3983871389 * _thisAdjusted = reinterpret_cast<WebCamDevice_t3983871389 *>(__this + 1);
	return WebCamDevice_get_name_m1117076425(_thisAdjusted, method);
}
// Conversion methods for marshalling of: UnityEngine.WebCamDevice
extern "C" void WebCamDevice_t3983871389_marshal_pinvoke(const WebCamDevice_t3983871389& unmarshaled, WebCamDevice_t3983871389_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_string(unmarshaled.get_m_Name_0());
	marshaled.___m_Flags_1 = unmarshaled.get_m_Flags_1();
}
extern "C" void WebCamDevice_t3983871389_marshal_pinvoke_back(const WebCamDevice_t3983871389_marshaled_pinvoke& marshaled, WebCamDevice_t3983871389& unmarshaled)
{
	unmarshaled.set_m_Name_0(il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0));
	int32_t unmarshaled_m_Flags_temp_1 = 0;
	unmarshaled_m_Flags_temp_1 = marshaled.___m_Flags_1;
	unmarshaled.set_m_Flags_1(unmarshaled_m_Flags_temp_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.WebCamDevice
extern "C" void WebCamDevice_t3983871389_marshal_pinvoke_cleanup(WebCamDevice_t3983871389_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.WebCamDevice
extern "C" void WebCamDevice_t3983871389_marshal_com(const WebCamDevice_t3983871389& unmarshaled, WebCamDevice_t3983871389_marshaled_com& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_Name_0());
	marshaled.___m_Flags_1 = unmarshaled.get_m_Flags_1();
}
extern "C" void WebCamDevice_t3983871389_marshal_com_back(const WebCamDevice_t3983871389_marshaled_com& marshaled, WebCamDevice_t3983871389& unmarshaled)
{
	unmarshaled.set_m_Name_0(il2cpp_codegen_marshal_bstring_result(marshaled.___m_Name_0));
	int32_t unmarshaled_m_Flags_temp_1 = 0;
	unmarshaled_m_Flags_temp_1 = marshaled.___m_Flags_1;
	unmarshaled.set_m_Flags_1(unmarshaled_m_Flags_temp_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.WebCamDevice
extern "C" void WebCamDevice_t3983871389_marshal_com_cleanup(WebCamDevice_t3983871389_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// System.Void UnityEngine.WebCamTexture::.ctor()
extern Il2CppCodeGenString* _stringLiteral371857150;
extern const uint32_t WebCamTexture__ctor_m1125343005_MetadataUsageId;
extern "C"  void WebCamTexture__ctor_m1125343005 (WebCamTexture_t1079476942 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamTexture__ctor_m1125343005_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture__ctor_m4198984292(__this, /*hidden argument*/NULL);
		WebCamTexture_Internal_CreateWebCamTexture_m1601948981(NULL /*static, unused*/, __this, _stringLiteral371857150, 0, 0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WebCamTexture::Internal_CreateWebCamTexture(UnityEngine.WebCamTexture,System.String,System.Int32,System.Int32,System.Int32)
extern "C"  void WebCamTexture_Internal_CreateWebCamTexture_m1601948981 (Il2CppObject * __this /* static, unused */, WebCamTexture_t1079476942 * ___self0, String_t* ___scriptingDevice1, int32_t ___requestedWidth2, int32_t ___requestedHeight3, int32_t ___maxFramerate4, const MethodInfo* method)
{
	typedef void (*WebCamTexture_Internal_CreateWebCamTexture_m1601948981_ftn) (WebCamTexture_t1079476942 *, String_t*, int32_t, int32_t, int32_t);
	static WebCamTexture_Internal_CreateWebCamTexture_m1601948981_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_Internal_CreateWebCamTexture_m1601948981_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::Internal_CreateWebCamTexture(UnityEngine.WebCamTexture,System.String,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___self0, ___scriptingDevice1, ___requestedWidth2, ___requestedHeight3, ___maxFramerate4);
}
// System.Void UnityEngine.WebCamTexture::Play()
extern "C"  void WebCamTexture_Play_m1997372813 (WebCamTexture_t1079476942 * __this, const MethodInfo* method)
{
	{
		WebCamTexture_INTERNAL_CALL_Play_m3743409567(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WebCamTexture::INTERNAL_CALL_Play(UnityEngine.WebCamTexture)
extern "C"  void WebCamTexture_INTERNAL_CALL_Play_m3743409567 (Il2CppObject * __this /* static, unused */, WebCamTexture_t1079476942 * ___self0, const MethodInfo* method)
{
	typedef void (*WebCamTexture_INTERNAL_CALL_Play_m3743409567_ftn) (WebCamTexture_t1079476942 *);
	static WebCamTexture_INTERNAL_CALL_Play_m3743409567_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_INTERNAL_CALL_Play_m3743409567_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::INTERNAL_CALL_Play(UnityEngine.WebCamTexture)");
	_il2cpp_icall_func(___self0);
}
// System.Void UnityEngine.WebCamTexture::Stop()
extern "C"  void WebCamTexture_Stop_m4045220381 (WebCamTexture_t1079476942 * __this, const MethodInfo* method)
{
	{
		WebCamTexture_INTERNAL_CALL_Stop_m3253711615(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WebCamTexture::INTERNAL_CALL_Stop(UnityEngine.WebCamTexture)
extern "C"  void WebCamTexture_INTERNAL_CALL_Stop_m3253711615 (Il2CppObject * __this /* static, unused */, WebCamTexture_t1079476942 * ___self0, const MethodInfo* method)
{
	typedef void (*WebCamTexture_INTERNAL_CALL_Stop_m3253711615_ftn) (WebCamTexture_t1079476942 *);
	static WebCamTexture_INTERNAL_CALL_Stop_m3253711615_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_INTERNAL_CALL_Stop_m3253711615_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::INTERNAL_CALL_Stop(UnityEngine.WebCamTexture)");
	_il2cpp_icall_func(___self0);
}
// System.Boolean UnityEngine.WebCamTexture::get_isPlaying()
extern "C"  bool WebCamTexture_get_isPlaying_m1392703560 (WebCamTexture_t1079476942 * __this, const MethodInfo* method)
{
	typedef bool (*WebCamTexture_get_isPlaying_m1392703560_ftn) (WebCamTexture_t1079476942 *);
	static WebCamTexture_get_isPlaying_m1392703560_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_get_isPlaying_m1392703560_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::get_isPlaying()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.WebCamTexture::set_deviceName(System.String)
extern "C"  void WebCamTexture_set_deviceName_m2284562713 (WebCamTexture_t1079476942 * __this, String_t* ___value0, const MethodInfo* method)
{
	typedef void (*WebCamTexture_set_deviceName_m2284562713_ftn) (WebCamTexture_t1079476942 *, String_t*);
	static WebCamTexture_set_deviceName_m2284562713_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_set_deviceName_m2284562713_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::set_deviceName(System.String)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.WebCamTexture::set_requestedFPS(System.Single)
extern "C"  void WebCamTexture_set_requestedFPS_m608448968 (WebCamTexture_t1079476942 * __this, float ___value0, const MethodInfo* method)
{
	typedef void (*WebCamTexture_set_requestedFPS_m608448968_ftn) (WebCamTexture_t1079476942 *, float);
	static WebCamTexture_set_requestedFPS_m608448968_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_set_requestedFPS_m608448968_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::set_requestedFPS(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.WebCamTexture::set_requestedWidth(System.Int32)
extern "C"  void WebCamTexture_set_requestedWidth_m3863095 (WebCamTexture_t1079476942 * __this, int32_t ___value0, const MethodInfo* method)
{
	typedef void (*WebCamTexture_set_requestedWidth_m3863095_ftn) (WebCamTexture_t1079476942 *, int32_t);
	static WebCamTexture_set_requestedWidth_m3863095_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_set_requestedWidth_m3863095_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::set_requestedWidth(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.WebCamTexture::set_requestedHeight(System.Int32)
extern "C"  void WebCamTexture_set_requestedHeight_m299835388 (WebCamTexture_t1079476942 * __this, int32_t ___value0, const MethodInfo* method)
{
	typedef void (*WebCamTexture_set_requestedHeight_m299835388_ftn) (WebCamTexture_t1079476942 *, int32_t);
	static WebCamTexture_set_requestedHeight_m299835388_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_set_requestedHeight_m299835388_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::set_requestedHeight(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices()
extern "C"  WebCamDeviceU5BU5D_t2903637840* WebCamTexture_get_devices_m4137524804 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef WebCamDeviceU5BU5D_t2903637840* (*WebCamTexture_get_devices_m4137524804_ftn) ();
	static WebCamTexture_get_devices_m4137524804_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_get_devices_m4137524804_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::get_devices()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.WebCamTexture::get_didUpdateThisFrame()
extern "C"  bool WebCamTexture_get_didUpdateThisFrame_m4104709683 (WebCamTexture_t1079476942 * __this, const MethodInfo* method)
{
	typedef bool (*WebCamTexture_get_didUpdateThisFrame_m4104709683_ftn) (WebCamTexture_t1079476942 *);
	static WebCamTexture_get_didUpdateThisFrame_m4104709683_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_get_didUpdateThisFrame_m4104709683_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::get_didUpdateThisFrame()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.WritableAttribute::.ctor()
extern "C"  void WritableAttribute__ctor_m761932763 (WritableAttribute_t3715198420 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m1730479323(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WWW::.ctor(System.String)
extern "C"  void WWW__ctor_m2024029190 (WWW_t2919945039 * __this, String_t* ___url0, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___url0;
		WWW_InitWWW_m1194933100(__this, L_0, (ByteU5BU5D_t3397334013*)(ByteU5BU5D_t3397334013*)NULL, (StringU5BU5D_t1642385972*)(StringU5BU5D_t1642385972*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WWW::Dispose()
extern "C"  void WWW_Dispose_m2554269413 (WWW_t2919945039 * __this, const MethodInfo* method)
{
	{
		WWW_DestroyWWW_m2548500174(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WWW::Finalize()
extern "C"  void WWW_Finalize_m3300880244 (WWW_t2919945039 * __this, const MethodInfo* method)
{
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		WWW_DestroyWWW_m2548500174(__this, (bool)0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		Object_Finalize_m4087144328(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_JUMP_TBL(0x14, IL_0014)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C"  void WWW_DestroyWWW_m2548500174 (WWW_t2919945039 * __this, bool ___cancel0, const MethodInfo* method)
{
	typedef void (*WWW_DestroyWWW_m2548500174_ftn) (WWW_t2919945039 *, bool);
	static WWW_DestroyWWW_m2548500174_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_DestroyWWW_m2548500174_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::DestroyWWW(System.Boolean)");
	_il2cpp_icall_func(__this, ___cancel0);
}
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
extern "C"  void WWW_InitWWW_m1194933100 (WWW_t2919945039 * __this, String_t* ___url0, ByteU5BU5D_t3397334013* ___postData1, StringU5BU5D_t1642385972* ___iHeaders2, const MethodInfo* method)
{
	typedef void (*WWW_InitWWW_m1194933100_ftn) (WWW_t2919945039 *, String_t*, ByteU5BU5D_t3397334013*, StringU5BU5D_t1642385972*);
	static WWW_InitWWW_m1194933100_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_InitWWW_m1194933100_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])");
	_il2cpp_icall_func(__this, ___url0, ___postData1, ___iHeaders2);
}
// UnityEngine.AssetBundle UnityEngine.WWW::get_assetBundle()
extern "C"  AssetBundle_t2054978754 * WWW_get_assetBundle_m80031863 (WWW_t2919945039 * __this, const MethodInfo* method)
{
	typedef AssetBundle_t2054978754 * (*WWW_get_assetBundle_m80031863_ftn) (WWW_t2919945039 *);
	static WWW_get_assetBundle_m80031863_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_get_assetBundle_m80031863_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_assetBundle()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C"  void YieldInstruction__ctor_m2014522928 (YieldInstruction_t3462875981 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t3462875981_marshal_pinvoke(const YieldInstruction_t3462875981& unmarshaled, YieldInstruction_t3462875981_marshaled_pinvoke& marshaled)
{
}
extern "C" void YieldInstruction_t3462875981_marshal_pinvoke_back(const YieldInstruction_t3462875981_marshaled_pinvoke& marshaled, YieldInstruction_t3462875981& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t3462875981_marshal_pinvoke_cleanup(YieldInstruction_t3462875981_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t3462875981_marshal_com(const YieldInstruction_t3462875981& unmarshaled, YieldInstruction_t3462875981_marshaled_com& marshaled)
{
}
extern "C" void YieldInstruction_t3462875981_marshal_com_back(const YieldInstruction_t3462875981_marshaled_com& marshaled, YieldInstruction_t3462875981& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t3462875981_marshal_com_cleanup(YieldInstruction_t3462875981_marshaled_com& marshaled)
{
}
// System.Void UnityEngineInternal.GenericStack::.ctor()
extern "C"  void GenericStack__ctor_m1256224477 (GenericStack_t3718539591 * __this, const MethodInfo* method)
{
	{
		Stack__ctor_m521896492(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.MathfInternal::.cctor()
extern Il2CppClass* MathfInternal_t715669973_il2cpp_TypeInfo_var;
extern const uint32_t MathfInternal__cctor_m1836685460_MetadataUsageId;
extern "C"  void MathfInternal__cctor_m1836685460 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathfInternal__cctor_m1836685460_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t715669973_StaticFields*)MathfInternal_t715669973_il2cpp_TypeInfo_var->static_fields)->set_FloatMinNormal_0((1.17549435E-38f));
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t715669973_StaticFields*)MathfInternal_t715669973_il2cpp_TypeInfo_var->static_fields)->set_FloatMinDenormal_1((1.401298E-45f));
		((MathfInternal_t715669973_StaticFields*)MathfInternal_t715669973_il2cpp_TypeInfo_var->static_fields)->set_IsFlushToZeroEnabled_2((bool)1);
		return;
	}
}
// System.Delegate UnityEngineInternal.NetFxCoreExtensions::CreateDelegate(System.Reflection.MethodInfo,System.Type,System.Object)
extern "C"  Delegate_t3022476291 * NetFxCoreExtensions_CreateDelegate_m2492743074 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___self0, Type_t * ___delegateType1, Il2CppObject * ___target2, const MethodInfo* method)
{
	Delegate_t3022476291 * V_0 = NULL;
	{
		Type_t * L_0 = ___delegateType1;
		Il2CppObject * L_1 = ___target2;
		MethodInfo_t * L_2 = ___self0;
		Delegate_t3022476291 * L_3 = Delegate_CreateDelegate_m2101460062(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		Delegate_t3022476291 * L_4 = V_0;
		return L_4;
	}
}
// System.Reflection.MethodInfo UnityEngineInternal.NetFxCoreExtensions::GetMethodInfo(System.Delegate)
extern "C"  MethodInfo_t * NetFxCoreExtensions_GetMethodInfo_m2715372889 (Il2CppObject * __this /* static, unused */, Delegate_t3022476291 * ___self0, const MethodInfo* method)
{
	MethodInfo_t * V_0 = NULL;
	{
		Delegate_t3022476291 * L_0 = ___self0;
		NullCheck(L_0);
		MethodInfo_t * L_1 = Delegate_get_Method_m2968370506(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		MethodInfo_t * L_2 = V_0;
		return L_2;
	}
}
// System.Delegate UnityEngineInternal.ScriptingUtils::CreateDelegate(System.Type,System.Reflection.MethodInfo)
extern "C"  Delegate_t3022476291 * ScriptingUtils_CreateDelegate_m1848023196 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, MethodInfo_t * ___methodInfo1, const MethodInfo* method)
{
	Delegate_t3022476291 * V_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		MethodInfo_t * L_1 = ___methodInfo1;
		Delegate_t3022476291 * L_2 = Delegate_CreateDelegate_m3441190144(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000e;
	}

IL_000e:
	{
		Delegate_t3022476291 * L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern Il2CppClass* TypeInferenceRules_t1810425448_il2cpp_TypeInfo_var;
extern const uint32_t TypeInferenceRuleAttribute__ctor_m599630929_MetadataUsageId;
extern "C"  void TypeInferenceRuleAttribute__ctor_m599630929 (TypeInferenceRuleAttribute_t1390152093 * __this, int32_t ___rule0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeInferenceRuleAttribute__ctor_m599630929_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppObject * L_0 = Box(TypeInferenceRules_t1810425448_il2cpp_TypeInfo_var, (&___rule0));
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		TypeInferenceRuleAttribute__ctor_m470566337(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern "C"  void TypeInferenceRuleAttribute__ctor_m470566337 (TypeInferenceRuleAttribute_t1390152093 * __this, String_t* ___rule0, const MethodInfo* method)
{
	{
		Attribute__ctor_m1730479323(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rule0;
		__this->set__rule_0(L_0);
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern "C"  String_t* TypeInferenceRuleAttribute_ToString_m3941510216 (TypeInferenceRuleAttribute_t1390152093 * __this, const MethodInfo* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get__rule_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngineInternal.WebRequestUtils::RedirectTo(System.String,System.String)
extern Il2CppClass* Uri_t19570940_il2cpp_TypeInfo_var;
extern const uint32_t WebRequestUtils_RedirectTo_m3803295888_MetadataUsageId;
extern "C"  String_t* WebRequestUtils_RedirectTo_m3803295888 (Il2CppObject * __this /* static, unused */, String_t* ___baseUri0, String_t* ___redirectUri1, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestUtils_RedirectTo_m3803295888_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t19570940 * V_0 = NULL;
	String_t* V_1 = NULL;
	Uri_t19570940 * V_2 = NULL;
	Uri_t19570940 * V_3 = NULL;
	{
		String_t* L_0 = ___redirectUri1;
		NullCheck(L_0);
		Il2CppChar L_1 = String_get_Chars_m4230566705(L_0, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = ___redirectUri1;
		Uri_t19570940 * L_3 = (Uri_t19570940 *)il2cpp_codegen_object_new(Uri_t19570940_il2cpp_TypeInfo_var);
		Uri__ctor_m1027317340(L_3, L_2, 2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0024;
	}

IL_001c:
	{
		String_t* L_4 = ___redirectUri1;
		Uri_t19570940 * L_5 = (Uri_t19570940 *)il2cpp_codegen_object_new(Uri_t19570940_il2cpp_TypeInfo_var);
		Uri__ctor_m1027317340(L_5, L_4, 0, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0024:
	{
		Uri_t19570940 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = Uri_get_IsAbsoluteUri_m4123650233(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_8 = ___redirectUri1;
		V_1 = L_8;
		goto IL_0052;
	}

IL_0036:
	{
		String_t* L_9 = ___baseUri0;
		Uri_t19570940 * L_10 = (Uri_t19570940 *)il2cpp_codegen_object_new(Uri_t19570940_il2cpp_TypeInfo_var);
		Uri__ctor_m1027317340(L_10, L_9, 1, /*hidden argument*/NULL);
		V_2 = L_10;
		Uri_t19570940 * L_11 = V_2;
		Uri_t19570940 * L_12 = V_0;
		Uri_t19570940 * L_13 = (Uri_t19570940 *)il2cpp_codegen_object_new(Uri_t19570940_il2cpp_TypeInfo_var);
		Uri__ctor_m371762263(L_13, L_11, L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		Uri_t19570940 * L_14 = V_3;
		NullCheck(L_14);
		String_t* L_15 = Uri_get_AbsoluteUri_m2120317928(L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		goto IL_0052;
	}

IL_0052:
	{
		String_t* L_16 = V_1;
		return L_16;
	}
}
// System.Void UnityEngineInternal.WebRequestUtils::.cctor()
extern Il2CppClass* Regex_t1803876613_il2cpp_TypeInfo_var;
extern Il2CppClass* WebRequestUtils_t4100941042_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2697683047;
extern const uint32_t WebRequestUtils__cctor_m893658947_MetadataUsageId;
extern "C"  void WebRequestUtils__cctor_m893658947 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestUtils__cctor_m893658947_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Regex_t1803876613 * L_0 = (Regex_t1803876613 *)il2cpp_codegen_object_new(Regex_t1803876613_il2cpp_TypeInfo_var);
		Regex__ctor_m2794328522(L_0, _stringLiteral2697683047, /*hidden argument*/NULL);
		((WebRequestUtils_t4100941042_StaticFields*)WebRequestUtils_t4100941042_il2cpp_TypeInfo_var->static_fields)->set_domainRegex_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
