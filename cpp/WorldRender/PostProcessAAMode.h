// Object: PostProcessAAMode
// RuntimeId: 23705
// TypeInfo: 0x0000000144EB92D0

namespace WorldRender {
    enum PostProcessAAMode {
        PostProcessAAMode_None = 0,
        PostProcessAAMode_FxaaLow = 1,
        PostProcessAAMode_FxaaMedium = 2,
        PostProcessAAMode_FxaaHigh = 3,
        PostProcessAAMode_FxaaCompute = 4,
        PostProcessAAMode_FxaaComputeExtreme = 5,
        PostProcessAAMode_Smaa1x = 6,
        PostProcessAAMode_SmaaT2x = 7,
        PostProcessAAMode_DLAA = 8,
        PostProcessAAMode_TemporalAA = 9
    };
}