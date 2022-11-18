// Object: ShaderDepthBiasGroup
// RuntimeId: 2179
// TypeInfo: 0x0000000144F24450

namespace RenderBase {
    enum ShaderDepthBiasGroup {
        ShaderDepthBiasGroup_Default = 0,
        ShaderDepthBiasGroup_Decal = 1,
        ShaderDepthBiasGroup_EmitterOcclusion = 2,
        ShaderDepthBiasGroup_EdgeModel = 3,
        ShaderDepthBiasGroup_TerrainDecal = 4,
        ShaderDepthBiasGroup_TerrainDecalZPass = 5,
        ShaderDepthBiasGroup_DistantShadowCache = 6,
        ShaderDepthBiasGroup_Shadow16Bit = 7,
        ShaderDepthBiasGroup_Shadow24Bit = 8,
        ShaderDepthBiasGroup_Shadow32Bit = 9,
        ShaderDepthBiasGroup_ZPass = 10,
        ShaderDepthBiasGroup_Emissive = 11,
        ShaderDepthBiasGroup_VelocityVector = 12,
        ShaderDepthBiasGroup_Outline = 13,
        ShaderDepthBiasGroup_Overlay = 14,
        ShaderDepthBiasGroupCount = 15
    };
}