// Object: SpawnRotationData
// ClassId: 4495
// RuntimeId: 61787
// TypeInfo: 0x0000000144E2C5C0
#include "../Emitter/ProcessorData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Emitter {
    class SpawnRotationData : public Emitter::ProcessorData {
        Float32 Rotation; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(SpawnRotationData) == 0x40);
}
#pragma pack(pop)