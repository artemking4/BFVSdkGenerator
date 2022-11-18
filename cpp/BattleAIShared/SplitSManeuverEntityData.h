// Object: SplitSManeuverEntityData
// ClassId: 2661
// RuntimeId: 54014
// TypeInfo: 0x0000000144C184B0
#include "../BattleAIShared/DogFightManeuverEntityBaseData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class SplitSManeuverEntityData : public BattleAIShared::DogFightManeuverEntityBaseData {
        Float32 Climb; // 0x30
        Float32 MaxAltitudeToRun; // 0x34
        Float32 MinAltitudeToRun; // 0x38
        Float32 SubstateDurationScale; // 0x3C
    }; // 0x40
    static_assert(sizeof(SplitSManeuverEntityData) == 0x40);
}
#pragma pack(pop)