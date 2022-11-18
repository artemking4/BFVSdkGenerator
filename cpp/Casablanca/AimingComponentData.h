// Object: AimingComponentData
// ClassId: 1712
// RuntimeId: 44204
// TypeInfo: 0x0000000144C7D580
#include "../Entity/GameComponentData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace Casablanca {
    class AimingComponentData : public Entity::GameComponentData {
        Float32 TrackHeatSignatureThreshold; // 0x80
        Float32 Range; // 0x84
        Float32 AngularTolerance; // 0x88
        Float32 PitchVelocity; // 0x8C
        Float32 YawVelocity; // 0x90
        Float32 OcclusionTimeout; // 0x94
        Float32 UnoccupiedTimeout; // 0x98
        Boolean TrackActivelySpottedTargets; // 0x9C
        Boolean TrackPassivelySpottedTargets; // 0x9D
        char pad_0x9E[0x2];
    }; // 0xA0
    static_assert(sizeof(AimingComponentData) == 0xA0);
}
#pragma pack(pop)