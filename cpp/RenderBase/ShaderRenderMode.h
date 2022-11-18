// Object: ShaderRenderMode
// RuntimeId: 53537
// TypeInfo: 0x0000000144F24710

namespace RenderBase {
    enum ShaderRenderMode {
        ShaderRenderMode_Forward = 0,
        ShaderRenderMode_ForwardSimple = 1,
        ShaderRenderMode_ForwardOpaque = 2,
        ShaderRenderMode_ZOnly = 3,
        ShaderRenderMode_DeferredShadingGBufferLayout0 = 4,
        ShaderRenderMode_DeferredShadingGBufferLayout1 = 5,
        ShaderRenderMode_DeferredShadingGBufferLayout2 = 6,
        ShaderRenderMode_DeferredShadingGBufferLayout3 = 7,
        ShaderRenderMode_DeferredShadingGBufferLayout4 = 8,
        ShaderRenderMode_Raytrace = 9,
        ShaderRenderMode_RaytraceForward = 10,
        ShaderRenderMode_ForwardEmissive = 11,
        ShaderRenderMode_VelocityVector = 12,
        ShaderRenderMode_DistortionVector = 13,
        ShaderRenderMode_DebugMulti = 14,
        ShaderRenderMode_FogVolume = 15,
        ShaderRenderMode_GBufferSimple = 16,
        ShaderRenderMode_ForwardOpaque_RuntimeOnly = 17,
        ShaderRenderModeCount = 18
    };
}