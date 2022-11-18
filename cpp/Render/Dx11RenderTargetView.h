// Object: Dx11RenderTargetView
// ClassId: 8342
// RuntimeId: 28745
// TypeInfo: 0x0000000144F1EEF0
#include "../Render/IRenderTargetView.h"

namespace Render {
    class Dx11RenderTargetView : public Render::IRenderTargetView {
        char pad_0x8[0x110];
    }; // 0x118
    static_assert(sizeof(Dx11RenderTargetView) == 0x118);
}