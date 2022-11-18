// Object: GravityData
// ClassId: 4482
// RuntimeId: 20258
// TypeInfo: 0x0000000144E2C340
#include "../Emitter/ProcessorData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Emitter {
    class GravityData : public Emitter::ProcessorData {
        Float32 Gravity; // 0x38
        Float32 PerParticleRandomness; // 0x3C
    }; // 0x40
    static_assert(sizeof(GravityData) == 0x40);
}
#pragma pack(pop)