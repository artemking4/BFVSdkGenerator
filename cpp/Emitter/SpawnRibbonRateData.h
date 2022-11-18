// Object: SpawnRibbonRateData
// ClassId: 4494
// RuntimeId: 32715
// TypeInfo: 0x0000000144E2CA40
#include "../Emitter/ProcessorData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Emitter {
    class SpawnRibbonRateData : public Emitter::ProcessorData {
        Float32 SpawnRate; // 0x38
        Float32 AngleDeviation; // 0x3C
        Boolean DistributeOverDistance; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(SpawnRibbonRateData) == 0x48);
}
#pragma pack(pop)