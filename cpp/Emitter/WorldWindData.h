// Object: WorldWindData
// ClassId: 4537
// RuntimeId: 35079
// TypeInfo: 0x0000000144E2C240
#include "../Emitter/ProcessorData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Emitter {
    class WorldWindData : public Emitter::ProcessorData {
        Float32 WindMultiplier; // 0x38
        Float32 PerParticleRandomness; // 0x3C
    }; // 0x40
    static_assert(sizeof(WorldWindData) == 0x40);
}
#pragma pack(pop)