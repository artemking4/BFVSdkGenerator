// Object: ImmelmannManeuverEntityData
// ClassId: 2655
// RuntimeId: 61714
// TypeInfo: 0x0000000144C18630
#include "../BattleAIShared/DogFightManeuverEntityBaseData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class ImmelmannManeuverEntityData : public BattleAIShared::DogFightManeuverEntityBaseData {
        Float32 MaxAltitudeToRun; // 0x30
        Float32 SubstateDurationScale; // 0x34
    }; // 0x38
    static_assert(sizeof(ImmelmannManeuverEntityData) == 0x38);
}
#pragma pack(pop)