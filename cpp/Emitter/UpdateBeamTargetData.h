// Object: UpdateBeamTargetData
// ClassId: 4506
// RuntimeId: 25810
// TypeInfo: 0x0000000144E2B1C0
#include "../Emitter/ProcessorData.h"
#include "../Emitter/LocationSelection.h"

#pragma pack(push, 8)
namespace Emitter {
    class UpdateBeamTargetData : public Emitter::ProcessorData {
        Emitter::LocationSelection Target; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(UpdateBeamTargetData) == 0x40);
}
#pragma pack(pop)