#include "il2cpp-config.h"

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

// JSHighlightingController
struct JSHighlightingController_t1862783275;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E3783534214.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DUnityScript_JSHighlightingController1862783275.h"
#include "AssemblyU2DUnityScript_JSHighlightingController1862783275MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3819376471MethodDeclarations.h"
#include "mscorlib_System_Type1303803226MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject1756533147MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_RuntimeTypeHandle2330101084.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "AssemblyU2DCSharpU2Dfirstpass_HighlightableObject2166055633.h"
#include "UnityEngine_UnityEngine_Input1785128008MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_HighlightableObject2166055633MethodDeclarations.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void JSHighlightingController::.ctor()
extern "C"  void JSHighlightingController__ctor_m3649728171 (JSHighlightingController_t1862783275 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JSHighlightingController::Awake()
extern const Il2CppType* HighlightableObject_t2166055633_0_0_0_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppClass* HighlightableObject_t2166055633_il2cpp_TypeInfo_var;
extern const uint32_t JSHighlightingController_Awake_m495367244_MetadataUsageId;
extern "C"  void JSHighlightingController_Awake_m495367244 (JSHighlightingController_t1862783275 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSHighlightingController_Awake_m495367244_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(HighlightableObject_t2166055633_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		Component_t3819376471 * L_2 = GameObject_AddComponent_m3757565614(L_0, L_1, /*hidden argument*/NULL);
		__this->set_ho_2(((HighlightableObject_t2166055633 *)CastclassClass(L_2, HighlightableObject_t2166055633_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void JSHighlightingController::Update()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern const uint32_t JSHighlightingController_Update_m1522305342_MetadataUsageId;
extern "C"  void JSHighlightingController_Update_m1522305342 (JSHighlightingController_t1862783275 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSHighlightingController_Update_m1522305342_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)9), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		HighlightableObject_t2166055633 * L_1 = __this->get_ho_2();
		NullCheck(L_1);
		HighlightableObject_ConstantSwitch_m3022565190(L_1, /*hidden argument*/NULL);
		goto IL_0033;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)113), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		HighlightableObject_t2166055633 * L_3 = __this->get_ho_2();
		NullCheck(L_3);
		HighlightableObject_ConstantSwitchImmediate_m209523915(L_3, /*hidden argument*/NULL);
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_4 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)122), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004a;
		}
	}
	{
		HighlightableObject_t2166055633 * L_5 = __this->get_ho_2();
		NullCheck(L_5);
		HighlightableObject_Off_m525183649(L_5, /*hidden argument*/NULL);
	}

IL_004a:
	{
		return;
	}
}
// System.Void JSHighlightingController::Main()
extern "C"  void JSHighlightingController_Main_m3404803038 (JSHighlightingController_t1862783275 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
