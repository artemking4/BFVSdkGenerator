// Object: SpawnRateData
// ClassId: 4493
// RuntimeId: 4552
// TypeInfo: 0x0000000144E2CAC0
#include "../Emitter/ProcessorData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Emitter {
    class SpawnRateData : public Emitter::ProcessorData {
        Float32 SpawnRate; // 0x38
        Boolean DistributeOverTime; // 0x3C
        Boolean DistributeOverDistance; // 0x3D
        char pad_0x3E[0x2];
    }; // 0x40
    static_assert(sizeof(SpawnRateData) == 0x40);
}
#pragma pack(pop)