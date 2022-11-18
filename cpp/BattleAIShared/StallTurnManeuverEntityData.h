// Object: StallTurnManeuverEntityData
// ClassId: 2662
// RuntimeId: 11524
// TypeInfo: 0x0000000144C19AB0
#include "../BattleAIShared/DogFightManeuverEntityBaseData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class StallTurnManeuverEntityData : public BattleAIShared::DogFightManeuverEntityBaseData {
        Float32 MaxAltitudeToRun; // 0x30
        Float32 Climb; // 0x34
        Float32 SubstateDurationScale; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(StallTurnManeuverEntityData) == 0x40);
}
#pragma pack(pop)