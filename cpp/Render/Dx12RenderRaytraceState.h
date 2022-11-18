// Object: Dx12RenderRaytraceState
// ClassId: 8331
// RuntimeId: 21128
// TypeInfo: 0x0000000144F20150
#include "../Render/IRenderRaytraceState.h"

namespace Render {
    class Dx12RenderRaytraceState : public Render::IRenderRaytraceState {
        char pad_0x8[0xD8];
    }; // 0xE0
    static_assert(sizeof(Dx12RenderRaytraceState) == 0xE0);
}