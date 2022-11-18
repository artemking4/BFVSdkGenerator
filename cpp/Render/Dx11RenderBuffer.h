// Object: Dx11RenderBuffer
// ClassId: 8335
// RuntimeId: 64569
// TypeInfo: 0x0000000144F1EDF0
#include "../Render/BaseRenderBuffer.h"

namespace Render {
    class Dx11RenderBuffer : public Render::BaseRenderBuffer {
        char pad_0x60[0x30];
    }; // 0x90
    static_assert(sizeof(Dx11RenderBuffer) == 0x90);
}