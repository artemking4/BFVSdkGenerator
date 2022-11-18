// Object: SpawnAnimationData
// ClassId: 4486
// RuntimeId: 8306
// TypeInfo: 0x0000000144E2C6C0
#include "../Emitter/ProcessorData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Emitter {
    class SpawnAnimationData : public Emitter::ProcessorData {
        Float32 AnimationSpeed; // 0x38
        Boolean BasedOnLifetime; // 0x3C
        char pad_0x3D[0x3];
    }; // 0x40
    static_assert(sizeof(SpawnAnimationData) == 0x40);
}
#pragma pack(pop)