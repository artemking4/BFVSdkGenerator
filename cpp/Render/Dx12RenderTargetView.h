// Object: Dx12RenderTargetView
// ClassId: 8343
// RuntimeId: 24446
// TypeInfo: 0x0000000144F200D0
#include "../Render/IRenderTargetView.h"

namespace Render {
    class Dx12RenderTargetView : public Render::IRenderTargetView {
        char pad_0x8[0xF8];
    }; // 0x100
    static_assert(sizeof(Dx12RenderTargetView) == 0x100);
}