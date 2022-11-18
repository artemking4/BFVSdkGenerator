// Object: UpdateBeamSourceData
// ClassId: 4505
// RuntimeId: 59978
// TypeInfo: 0x0000000144E2B240
#include "../Emitter/ProcessorData.h"
#include "../Emitter/LocationSelection.h"

#pragma pack(push, 8)
namespace Emitter {
    class UpdateBeamSourceData : public Emitter::ProcessorData {
        Emitter::LocationSelection Source; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(UpdateBeamSourceData) == 0x40);
}
#pragma pack(pop)