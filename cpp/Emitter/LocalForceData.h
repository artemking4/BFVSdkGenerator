// Object: LocalForceData
// ClassId: 4483
// RuntimeId: 2776
// TypeInfo: 0x0000000144E2C2C0
#include "../Emitter/ProcessorData.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace Emitter {
    class LocalForceData : public Emitter::ProcessorData {
        Float32 PerParticleRandomness; // 0x38
        Boolean EmitterLocalSpaceForce; // 0x3C
        char pad_0x3D[0x3];
        Core::Vec3 LocalForce; // 0x40
    }; // 0x50
    static_assert(sizeof(LocalForceData) == 0x50);
}
#pragma pack(pop)