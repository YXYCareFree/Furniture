#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// HighlightingEventHandler
struct HighlightingEventHandler_t3695243984;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void HighlightingEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void HighlightingEventHandler__ctor_m4145634901 (HighlightingEventHandler_t3695243984 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingEventHandler::Invoke(System.Boolean,System.Boolean)
extern "C"  void HighlightingEventHandler_Invoke_m2362611821 (HighlightingEventHandler_t3695243984 * __this, bool ___state0, bool ___zWrite1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult HighlightingEventHandler::BeginInvoke(System.Boolean,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * HighlightingEventHandler_BeginInvoke_m432332762 (HighlightingEventHandler_t3695243984 * __this, bool ___state0, bool ___zWrite1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void HighlightingEventHandler_EndInvoke_m4034422839 (HighlightingEventHandler_t3695243984 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
