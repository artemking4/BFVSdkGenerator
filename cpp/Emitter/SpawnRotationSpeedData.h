// Object: SpawnRotationSpeedData
// ClassId: 4496
// RuntimeId: 34374
// TypeInfo: 0x0000000144E2C4C0
#include "../Emitter/ProcessorData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Emitter {
    class SpawnRotationSpeedData : public Emitter::ProcessorData {
        Float32 RotationSpeed; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(SpawnRotationSpeedData) == 0x40);
}
#pragma pack(pop)