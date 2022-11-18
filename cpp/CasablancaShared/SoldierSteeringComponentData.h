// Object: SoldierSteeringComponentData
// ClassId: 1848
// RuntimeId: 14897
// TypeInfo: 0x0000000144D35B30
#include "../Entity/GameComponentData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class SoldierSteeringComponentData : public Entity::GameComponentData {
        Float32 WantedSpeed; // 0x80
        Float32 Acceleration; // 0x84
        Float32 Deceleration; // 0x88
        Float32 MoveAngularAcceleration; // 0x8C
        Float32 MoveAngularSpeedFactor; // 0x90
        Float32 MaxForwardDir; // 0x94
        Float32 MaxStrafeDir; // 0x98
        Float32 StandingStillCutoffSpeed; // 0x9C
        Float32 TurnAngularAcceleration; // 0xA0
        Float32 AimMinPrecisionTolerance; // 0xA4
        Float32 PitchSpeed; // 0xA8
        Float32 TurningSpeed; // 0xAC
    }; // 0xB0
    static_assert(sizeof(SoldierSteeringComponentData) == 0xB0);
}
#pragma pack(pop)