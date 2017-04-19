#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightableObject/HighlightingRendererCache
struct  HighlightingRendererCache_t811119027  : public Il2CppObject
{
public:
	// UnityEngine.Renderer HighlightableObject/HighlightingRendererCache::rendererCached
	Renderer_t257310565 * ___rendererCached_0;
	// UnityEngine.GameObject HighlightableObject/HighlightingRendererCache::goCached
	GameObject_t1756533147 * ___goCached_1;
	// UnityEngine.Material[] HighlightableObject/HighlightingRendererCache::sourceMaterials
	MaterialU5BU5D_t3123989686* ___sourceMaterials_2;
	// UnityEngine.Material[] HighlightableObject/HighlightingRendererCache::replacementMaterials
	MaterialU5BU5D_t3123989686* ___replacementMaterials_3;
	// System.Collections.Generic.List`1<System.Int32> HighlightableObject/HighlightingRendererCache::transparentMaterialIndexes
	List_1_t1440998580 * ___transparentMaterialIndexes_4;

public:
	inline static int32_t get_offset_of_rendererCached_0() { return static_cast<int32_t>(offsetof(HighlightingRendererCache_t811119027, ___rendererCached_0)); }
	inline Renderer_t257310565 * get_rendererCached_0() const { return ___rendererCached_0; }
	inline Renderer_t257310565 ** get_address_of_rendererCached_0() { return &___rendererCached_0; }
	inline void set_rendererCached_0(Renderer_t257310565 * value)
	{
		___rendererCached_0 = value;
		Il2CppCodeGenWriteBarrier(&___rendererCached_0, value);
	}

	inline static int32_t get_offset_of_goCached_1() { return static_cast<int32_t>(offsetof(HighlightingRendererCache_t811119027, ___goCached_1)); }
	inline GameObject_t1756533147 * get_goCached_1() const { return ___goCached_1; }
	inline GameObject_t1756533147 ** get_address_of_goCached_1() { return &___goCached_1; }
	inline void set_goCached_1(GameObject_t1756533147 * value)
	{
		___goCached_1 = value;
		Il2CppCodeGenWriteBarrier(&___goCached_1, value);
	}

	inline static int32_t get_offset_of_sourceMaterials_2() { return static_cast<int32_t>(offsetof(HighlightingRendererCache_t811119027, ___sourceMaterials_2)); }
	inline MaterialU5BU5D_t3123989686* get_sourceMaterials_2() const { return ___sourceMaterials_2; }
	inline MaterialU5BU5D_t3123989686** get_address_of_sourceMaterials_2() { return &___sourceMaterials_2; }
	inline void set_sourceMaterials_2(MaterialU5BU5D_t3123989686* value)
	{
		___sourceMaterials_2 = value;
		Il2CppCodeGenWriteBarrier(&___sourceMaterials_2, value);
	}

	inline static int32_t get_offset_of_replacementMaterials_3() { return static_cast<int32_t>(offsetof(HighlightingRendererCache_t811119027, ___replacementMaterials_3)); }
	inline MaterialU5BU5D_t3123989686* get_replacementMaterials_3() const { return ___replacementMaterials_3; }
	inline MaterialU5BU5D_t3123989686** get_address_of_replacementMaterials_3() { return &___replacementMaterials_3; }
	inline void set_replacementMaterials_3(MaterialU5BU5D_t3123989686* value)
	{
		___replacementMaterials_3 = value;
		Il2CppCodeGenWriteBarrier(&___replacementMaterials_3, value);
	}

	inline static int32_t get_offset_of_transparentMaterialIndexes_4() { return static_cast<int32_t>(offsetof(HighlightingRendererCache_t811119027, ___transparentMaterialIndexes_4)); }
	inline List_1_t1440998580 * get_transparentMaterialIndexes_4() const { return ___transparentMaterialIndexes_4; }
	inline List_1_t1440998580 ** get_address_of_transparentMaterialIndexes_4() { return &___transparentMaterialIndexes_4; }
	inline void set_transparentMaterialIndexes_4(List_1_t1440998580 * value)
	{
		___transparentMaterialIndexes_4 = value;
		Il2CppCodeGenWriteBarrier(&___transparentMaterialIndexes_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
