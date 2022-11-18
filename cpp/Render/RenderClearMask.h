// Object: RenderClearMask
// RuntimeId: 1107
// TypeInfo: 0x0000000144F17950

namespace Render {
    enum RenderClearMask {
        RenderClearMask_Color0 = 1,
        RenderClearMask_Color1 = 2,
        RenderClearMask_Color2 = 4,
        RenderClearMask_Color3 = 8,
        RenderClearMask_Color4 = 16,
        RenderClearMask_Color5 = 32,
        RenderClearMask_Color6 = 64,
        RenderClearMask_Color7 = 128,
        RenderClearMask_Depth = 256,
        RenderClearMask_Stencil = 512,
        RenderClearMask_Color = 255,
        RenderClearMask_All = 1023,
        RenderClearMask_None = 0
    };
}