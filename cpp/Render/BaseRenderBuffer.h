// Object: BaseRenderBuffer
// ClassId: 8334
// RuntimeId: 26927
// TypeInfo: 0x0000000144F20500
#include "../Render/IRenderBuffer.h"

namespace Render {
    class BaseRenderBuffer : public Render::IRenderBuffer {
        char pad_0x8[0x58];
    }; // 0x60
    static_assert(sizeof(BaseRenderBuffer) == 0x60);
}