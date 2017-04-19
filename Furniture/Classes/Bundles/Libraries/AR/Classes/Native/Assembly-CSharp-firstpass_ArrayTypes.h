#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// HighlightableObject/HighlightingRendererCache
struct HighlightingRendererCache_t811119027;

#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharpU2Dfirstpass_HighlightableObject_H811119027.h"

#pragma once
// HighlightableObject/HighlightingRendererCache[]
struct HighlightingRendererCacheU5BU5D_t2569095714  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) HighlightingRendererCache_t811119027 * m_Items[1];

public:
	inline HighlightingRendererCache_t811119027 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HighlightingRendererCache_t811119027 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HighlightingRendererCache_t811119027 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline HighlightingRendererCache_t811119027 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HighlightingRendererCache_t811119027 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HighlightingRendererCache_t811119027 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
