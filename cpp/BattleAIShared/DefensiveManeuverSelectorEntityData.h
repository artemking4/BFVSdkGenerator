// Object: DefensiveManeuverSelectorEntityData
// ClassId: 2657
// RuntimeId: 24196
// TypeInfo: 0x0000000144C197B0
#include "../BattleAIShared/ManeuverSelectorEntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class DefensiveManeuverSelectorEntityData : public BattleAIShared::ManeuverSelectorEntityData {
        Float32 MinimumTargetVelocity; // 0x38
        Float32 TargetMaxDistance; // 0x3C
        Float32 TargetMaxDistanceSlack; // 0x40
        char pad_0x44[0x4];
    }; // 0x48
    static_assert(sizeof(DefensiveManeuverSelectorEntityData) == 0x48);
}
#pragma pack(pop)