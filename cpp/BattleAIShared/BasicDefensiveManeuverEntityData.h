// Object: BasicDefensiveManeuverEntityData
// ClassId: 2649
// RuntimeId: 45426
// TypeInfo: 0x0000000144C18330
#include "../BattleAIShared/DogFightManeuverEntityBaseData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class BasicDefensiveManeuverEntityData : public BattleAIShared::DogFightManeuverEntityBaseData {
        Float32 TargetMaxDistance; // 0x30
        Float32 TargetMaxDistanceSlack; // 0x34
        Float32 FlyStraightTime; // 0x38
        Float32 OscillateTime; // 0x3C
        Float32 OscillationFrequency; // 0x40
        Float32 SharpTurnTime; // 0x44
        Float32 DiveTime; // 0x48
        Float32 LoopingTime; // 0x4C
    }; // 0x50
    static_assert(sizeof(BasicDefensiveManeuverEntityData) == 0x50);
}
#pragma pack(pop)