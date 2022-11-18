// Object: ScenarioPathlinkData
// ClassId: 80
// RuntimeId: 39556
// TypeInfo: 0x0000000144C192B0
#include "../BattleAIShared/AIPathLinkData.h"
#include "../BattleAIShared/ScenarioAnimationData.h"
#include "../BattleAIShared/ScenarioTaskData.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class ScenarioPathlinkData : public BattleAIShared::AIPathLinkData {
        BattleAIShared::ScenarioAnimationData ScenarioAnimationData; // 0x60
        char pad_0x68[0x8];
        BattleAIShared::ScenarioTaskData ScenarioWaypointData; // 0x70
    }; // 0xD0
    static_assert(sizeof(ScenarioPathlinkData) == 0xD0);
}
#pragma pack(pop)