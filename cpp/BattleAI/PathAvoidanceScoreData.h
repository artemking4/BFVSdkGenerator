// Object: PathAvoidanceScoreData
// ClassId: 1470
// RuntimeId: 15000
// TypeInfo: 0x0000000144BEFC40
#include "../BattleAI/CoverScoreData.h"
#include "../BattleAIShared/CoverQueryPathEnemyAvoidanceByTypeData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAI {
    class PathAvoidanceScoreData : public BattleAI::CoverScoreData {
        Array<BattleAIShared::CoverQueryPathEnemyAvoidanceByTypeData> AvoidByTypeData; // 0x30
        Float32 MaxSearchDistance; // 0x38
        Float32 InnerZoneScore; // 0x3C
        Float32 OuterZoneScore; // 0x40
        Float32 NotPassingAvoidanceAreaScore; // 0x44
        Array<Float32> ScoresPerZone; // 0x48
        Boolean RejectCoverBeyondSearchDistance; // 0x50
        char pad_0x51[0x7];
    }; // 0x58
    static_assert(sizeof(PathAvoidanceScoreData) == 0x58);
}
#pragma pack(pop)