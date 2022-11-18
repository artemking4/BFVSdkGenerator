// Object: PreRollData
// ClassId: 4484
// RuntimeId: 52574
// TypeInfo: 0x0000000144E2C9C0
#include "../Emitter/ProcessorData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Emitter {
    class PreRollData : public Emitter::ProcessorData {
        Float32 PreRoll; // 0x38
        Float32 UpdatesPerSecond; // 0x3C
    }; // 0x40
    static_assert(sizeof(PreRollData) == 0x40);
}
#pragma pack(pop)