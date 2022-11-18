// Object: EnforceAltitudeManeuverEntityData
// ClassId: 2652
// RuntimeId: 35597
// TypeInfo: 0x0000000144C18BB0
#include "../BattleAIShared/DogFightManeuverEntityBaseData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class EnforceAltitudeManeuverEntityData : public BattleAIShared::DogFightManeuverEntityBaseData {
        Float32 MinAltitude; // 0x30
        Float32 MaxAltitude; // 0x34
        Float32 LookAheadTime; // 0x38
        Float32 SafetyDistance; // 0x3C
    }; // 0x40
    static_assert(sizeof(EnforceAltitudeManeuverEntityData) == 0x40);
}
#pragma pack(pop)