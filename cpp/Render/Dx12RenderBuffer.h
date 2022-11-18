// Object: Dx12RenderBuffer
// ClassId: 8336
// RuntimeId: 49968
// TypeInfo: 0x0000000144F1FDD0
#include "../Render/BaseRenderBuffer.h"

namespace Render {
    class Dx12RenderBuffer : public Render::BaseRenderBuffer {
        char pad_0x60[0x58];
    }; // 0xB8
    static_assert(sizeof(Dx12RenderBuffer) == 0xB8);
}