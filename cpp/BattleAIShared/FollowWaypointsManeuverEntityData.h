// Object: FollowWaypointsManeuverEntityData
// ClassId: 2654
// RuntimeId: 43270
// TypeInfo: 0x0000000144C18A30
#include "../BattleAIShared/DogFightManeuverEntityBaseData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class FollowWaypointsManeuverEntityData : public BattleAIShared::DogFightManeuverEntityBaseData {
        Float32 LookAheadTime; // 0x30
        Float32 PhysicsExtrapolationTime; // 0x34
        Boolean ExtrapolateRotation; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(FollowWaypointsManeuverEntityData) == 0x40);
}
#pragma pack(pop)