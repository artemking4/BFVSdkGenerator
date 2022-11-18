// Object: SpawnSpeedData
// ClassId: 4498
// RuntimeId: 54457
// TypeInfo: 0x0000000144E2C840
#include "../Emitter/ProcessorData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Emitter {
    class SpawnSpeedData : public Emitter::ProcessorData {
        Float32 Speed; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(SpawnSpeedData) == 0x40);
}
#pragma pack(pop)