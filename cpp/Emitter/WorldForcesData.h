// Object: WorldForcesData
// ClassId: 4536
// RuntimeId: 61507
// TypeInfo: 0x0000000144E2C1C0
#include "../Emitter/ProcessorData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Emitter {
    class WorldForcesData : public Emitter::ProcessorData {
        Float32 ForcesMultiplier; // 0x38
        Float32 PerParticleRandomness; // 0x3C
    }; // 0x40
    static_assert(sizeof(WorldForcesData) == 0x40);
}
#pragma pack(pop)