// Object: RenderWriteMask
// RuntimeId: 18715
// TypeInfo: 0x0000000144F17990

namespace Render {
    enum RenderWriteMask {
        RenderWriteMask_Red = 1,
        RenderWriteMask_Green = 2,
        RenderWriteMask_Blue = 4,
        RenderWriteMask_Alpha = 8,
        RenderWriteMask_None = 0,
        RenderWriteMask_Color = 7,
        RenderWriteMask_All = 15
    };
}