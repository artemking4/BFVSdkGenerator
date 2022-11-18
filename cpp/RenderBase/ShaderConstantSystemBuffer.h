// Object: ShaderConstantSystemBuffer
// RuntimeId: 31507
// TypeInfo: 0x0000000144F24310

namespace RenderBase {
    enum ShaderConstantSystemBuffer {
        ShaderConstantSystemBuffer_TiledForwardLightPunctual = 0,
        ShaderConstantSystemBuffer_TiledForwardLightPunctualShadow = 1,
        ShaderConstantSystemBuffer_TiledForwardLightArea = 2,
        ShaderConstantSystemBuffer_TiledForwardLightAreaShadow = 3,
        ShaderConstantSystemBuffer_TiledForwardLightLRV = 4,
        ShaderConstantSystemBuffer_TiledForwardLightLPR = 5,
        ShaderConstantSystemBuffer_TiledForwardLightGrid = 6,
        ShaderConstantSystemBuffer_TiledForwardLightIndex = 7,
        ShaderConstantSystemBuffer_SkinningBuffer = 8,
        ShaderConstantSystemBuffer_PrevSkinningBuffer = 9,
        ShaderConstantSystemBufferCount = 10
    };
}