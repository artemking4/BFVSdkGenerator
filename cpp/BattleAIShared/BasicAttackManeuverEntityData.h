// Object: BasicAttackManeuverEntityData
// ClassId: 2648
// RuntimeId: 28454
// TypeInfo: 0x0000000144C18230
#include "../BattleAIShared/DogFightManeuverEntityBaseData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../GameShared/PID.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class BasicAttackManeuverEntityData : public BattleAIShared::DogFightManeuverEntityBaseData {
        Float32 DistanceForMaxExtrapolationTime; // 0x30
        Float32 DistanceForNoExtrapolationTime; // 0x34
        Float32 MaxExtrapolationTime; // 0x38
        Float32 PhysicsExtrapolationTime; // 0x3C
        Float32 ExtrapolationDeltaTime; // 0x40
        Float32 MaxRollAngleAgainstSlowTargets; // 0x44
        Float32 WantedDistance; // 0x48
        Float32 WantedDistanceOffsetBetweenMultipleAttackers; // 0x4C
        Float32 MinThrottle; // 0x50
        Float32 MaxSpeedForMinThrottle; // 0x54
        Float32 MinDotForFlyingTowardsUs; // 0x58
        Float32 MinDotForSameDirection; // 0x5C
        Float32 MinForwardYForClimbing; // 0x60
        GameShared::PID ThrottlePID; // 0x64
        Boolean ExtrapolateRotation; // 0x84
        Boolean DoBasicCollisionAvoidance; // 0x85
        char pad_0x86[0x2];
    }; // 0x88
    static_assert(sizeof(BasicAttackManeuverEntityData) == 0x88);
}
#pragma pack(pop)