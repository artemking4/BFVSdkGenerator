// Object: ShaderInstancingMethod
// RuntimeId: 52160
// TypeInfo: 0x0000000144F24790

namespace RenderBase {
    enum ShaderInstancingMethod {
        ShaderInstancingMethod_Default = 0,
        ShaderInstancingMethod_None = 1,
        ShaderInstancingMethod_ObjectTransform4x3Half = 2,
        ShaderInstancingMethod_ObjectTransform4x3InstanceData4x1Half = 3,
        ShaderInstancingMethod_ObjectTransform4x3InstanceData4x2Half = 4,
        ShaderInstancingMethod_WorldTransform4x3Float = 5,
        ShaderInstancingMethod_WorldTransform4x3FloatInstanceData4x2Half = 6,
        ShaderInstancingMethod_PrevWorldTransform4x3FloatInstanceData4x2Half = 7,
        ShaderInstancingMethod_ObjectTranslationScaleHalf = 8,
        ShaderInstancingMethod_ObjectTranslationScaleHalfInstanceData4x1Half = 9,
        ShaderInstancingMethod_ObjectTranslationScaleHalfInstanceData4x2Half = 10,
        ShaderInstancingMethod_PositionStream = 11,
        ShaderInstancingMethod_PositionStreamAux = 12,
        ShaderInstancingMethod_LinearMediaStreaming = 13,
        ShaderInstancingMethod_DxBuffer = 14,
        ShaderInstancingMethod_DxBufferInstanceData4x1Float = 15,
        ShaderInstancingMethod_DxBufferInstanceData4x2Float = 16,
        ShaderInstancingMethod_Manual = 17,
        ShaderInstancingMethodCount = 18
    };
}