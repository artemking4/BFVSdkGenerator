// Object: ShaderBlendMode
// RuntimeId: 55855
// TypeInfo: 0x0000000144F24810

namespace RenderBase {
    enum ShaderBlendMode {
        ShaderBlendMode_Lerp = 0,
        ShaderBlendMode_Additive = 1,
        ShaderBlendMode_Multiply = 2,
        ShaderBlendMode_LerpPremultiplied = 3,
        ShaderBlendMode_PremultipliedColor = 4,
        ShaderBlendMode_DecalLerpNormal = 5,
        ShaderBlendMode_DecalLerpSmoothness = 6,
        ShaderBlendMode_DecalMultiplySmoothness = 7,
        ShaderBlendMode_DecalAddSmoothness = 8,
        ShaderBlendMode_DecalLerpNormalSmoothness = 9,
        ShaderBlendMode_DecalLerpReflectance = 10,
        ShaderBlendMode_DecalMultiplyReflectance = 11,
        ShaderBlendMode_DecalAddReflectance = 12,
        ShaderBlendMode_DecalLerpMetalMask = 13,
        ShaderBlendMode_DecalMultiplyMetalMask = 14,
        ShaderBlendMode_DecalAddMetalMask = 15,
        ShaderBlendMode_DecalLerpBaseColor = 16,
        ShaderBlendMode_DecalMultiplyBaseColor = 17,
        ShaderBlendMode_DecalAddBaseColor = 18,
        ShaderBlendMode_DecalLerpBaseColorMetalMaskReflectance = 19,
        ShaderBlendMode_DecalMultiplyBaseColorMetalMaskReflectance = 20,
        ShaderBlendMode_DecalLerpNormalSmoothnessMultiplyOthers = 21,
        ShaderBlendMode_DecalLerpEverything = 22
    };
}