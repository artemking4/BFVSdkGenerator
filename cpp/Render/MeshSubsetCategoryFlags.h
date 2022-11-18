// Object: MeshSubsetCategoryFlags
// RuntimeId: 8483
// TypeInfo: 0x0000000144F1DA80

namespace Render {
    enum MeshSubsetCategoryFlags {
        MeshSubsetCategoryFlags_Opaque = 1,
        MeshSubsetCategoryFlags_Transparent = 2,
        MeshSubsetCategoryFlags_TransparentDecal = 4,
        MeshSubsetCategoryFlags_ZOnly = 8,
        MeshSubsetCategoryFlags_Shadow = 16,
        MeshSubsetCategoryFlags_DynamicReflection = 32,
        MeshSubsetCategoryFlags_PlanarReflection = 64,
        MeshSubsetCategoryFlags_StaticReflection = 128,
        MeshSubsetCategoryFlags_DistantShadowCache = 4096,
        MeshSubsetCategoryFlags_RootShaderEffect = 16384,
        MeshSubsetCategoryFlags_ShadowOverride = 256,
        MeshSubsetCategoryFlags_DynamicReflectionOverride = 512,
        MeshSubsetCategoryFlags_PlanarReflectionOverride = 1024,
        MeshSubsetCategoryFlags_StaticReflectionOverride = 2048,
        MeshSubsetCategoryFlags_DistantShadowCacheOverride = 8192,
        MeshSubsetCategoryFlags_RootShaderEffectOverride = 32768,
        MeshSubsetCategoryFlags_Normal = 16391,
        MeshSubsetCategoryFlags_RaytracedReflection = 0,
        MeshSubsetCategoryFlags_RaytracedReflectionOverride = 0,
        MeshSubsetCategoryFlags_All = 65535
    };
}