// Object: UpdateVolumeMaskData
// ClassId: 4534
// RuntimeId: 51293
// TypeInfo: 0x0000000144E2AEC0
#include "../Emitter/ProcessorData.h"
#include "../Emitter/VolumeMaskType.h"

#pragma pack(push, 8)
namespace Emitter {
    class UpdateVolumeMaskData : public Emitter::ProcessorData {
        Emitter::VolumeMaskType MaskType; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(UpdateVolumeMaskData) == 0x40);
}
#pragma pack(pop)