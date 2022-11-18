// Object: DispatchBlendMode
// RuntimeId: 62710
// TypeInfo: 0x0000000144F1D9C0

namespace Render {
    enum DispatchBlendMode {
        DispatchBlendMode_NoBlend = 0,
        DispatchBlendMode_ZOnly = 1,
        DispatchBlendMode_DebugOverdraw = 2,
        DispatchBlendMode_DebugShaderCost = 3,
        DispatchBlendMode_Lerp = 4,
        DispatchBlendMode_Additive = 5,
        DispatchBlendMode_Multiply = 6,
        DispatchBlendMode_DualSourceColor = 7,
        DispatchBlendMode_FogVolume = 8,
        DispatchBlendMode_DecalLerpNormal = 9,
        DispatchBlendMode_DecalLerpSmoothness = 10,
        DispatchBlendMode_DecalMultiplySmoothness = 11,
        DispatchBlendMode_DecalAddSmoothness = 12,
        DispatchBlendMode_DecalLerpNormalSmoothness = 13,
        DispatchBlendMode_DecalLerpReflectance = 14,
        DispatchBlendMode_DecalMultiplyReflectance = 15,
        DispatchBlendMode_DecalAddReflectance = 16,
        DispatchBlendMode_DecalLerpMetalMask = 17,
        DispatchBlendMode_DecalMultiplyMetalMask = 18,
        DispatchBlendMode_DecalAddMetalMask = 19,
        DispatchBlendMode_DecalLerpBaseColor = 20,
        DispatchBlendMode_DecalMultiplyBaseColor = 21,
        DispatchBlendMode_DecalAddBaseColor = 22,
        DispatchBlendMode_DecalLerpBaseColorMetalMaskReflectance = 23,
        DispatchBlendMode_DecalMultiplyBaseColorMetalMaskReflectance = 24,
        DispatchBlendMode_DecalLerpNormalSmoothnessMultiplyOthers = 25,
        DispatchBlendMode_DecalLerpEverything = 26,
        DispatchBlendModeCount = 27
    };
}