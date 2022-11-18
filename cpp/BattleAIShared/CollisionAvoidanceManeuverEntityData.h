// Object: CollisionAvoidanceManeuverEntityData
// ClassId: 2650
// RuntimeId: 45738
// TypeInfo: 0x0000000144C18E30
#include "../BattleAIShared/DogFightManeuverEntityBaseData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class CollisionAvoidanceManeuverEntityData : public BattleAIShared::DogFightManeuverEntityBaseData {
        Float32 MinAltitude; // 0x30
        Float32 LookAheadTime; // 0x34
        Boolean IgnoreTarget; // 0x38
        Boolean IgnoreAllCollisionsExceptHumans; // 0x39
        Boolean IgnoreHumans; // 0x3A
        char pad_0x3B[0x5];
    }; // 0x40
    static_assert(sizeof(CollisionAvoidanceManeuverEntityData) == 0x40);
}
#pragma pack(pop)