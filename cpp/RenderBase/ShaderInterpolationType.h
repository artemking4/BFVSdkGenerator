// Object: ShaderInterpolationType
// RuntimeId: 53159
// TypeInfo: 0x0000000144F24410

namespace RenderBase {
    enum ShaderInterpolationType {
        ShaderInterpolationType_Linear = 0,
        ShaderInterpolationType_Centroid = 1,
        ShaderInterpolationType_NoInterpolation = 2,
        ShaderInterpolationType_NoPerspective = 3,
        ShaderInterpolationType_Sample = 4,
        ShaderInterpolationType_Count = 5,
        ShaderInterpolationType_Mask = 255,
        ShaderInterpolationType_DomainManual = 256,
        ShaderInterpolationType_VertexOnly = 512,
        ShaderInterpolationType_VertexHullOnly = 1024,
        ShaderInterpolationType_VertexHullDomainOnly = 2048
    };
}