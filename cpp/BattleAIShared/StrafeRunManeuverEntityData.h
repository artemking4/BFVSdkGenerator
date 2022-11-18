// Object: StrafeRunManeuverEntityData
// ClassId: 2663
// RuntimeId: 57225
// TypeInfo: 0x0000000144C191B0
#include "../BattleAIShared/DogFightManeuverEntityBaseData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class StrafeRunManeuverEntityData : public BattleAIShared::DogFightManeuverEntityBaseData {
        Float32 AltitudeDifferenceToAttack; // 0x30
        Float32 DiveAngle; // 0x34
        Float32 AttackSpeed; // 0x38
        Float32 BreakOffAngle; // 0x3C
        Float32 BreakOffAtTimeToCollision; // 0x40
        Float32 BreakOffHeightDifference; // 0x44
        Float32 BulletSpeed; // 0x48
        Float32 ExtrapolationDeltaTime; // 0x4C
        Float32 SlowTargetSpeed; // 0x50
        Boolean ExtrapolateTargetRotation; // 0x54
        char pad_0x55[0x3];
    }; // 0x58
    static_assert(sizeof(StrafeRunManeuverEntityData) == 0x58);
}
#pragma pack(pop)