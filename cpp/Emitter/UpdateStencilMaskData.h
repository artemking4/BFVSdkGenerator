// Object: UpdateStencilMaskData
// ClassId: 4527
// RuntimeId: 19266
// TypeInfo: 0x0000000144E2AD40
#include "../Emitter/ProcessorData.h"
#include "../Emitter/EmitterStencilMask.h"

#pragma pack(push, 8)
namespace Emitter {
    class UpdateStencilMaskData : public Emitter::ProcessorData {
        Emitter::EmitterStencilMask Mask; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(UpdateStencilMaskData) == 0x40);
}
#pragma pack(pop)