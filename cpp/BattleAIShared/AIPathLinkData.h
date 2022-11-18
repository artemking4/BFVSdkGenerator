// Object: AIPathLinkData
// ClassId: 79
// RuntimeId: 52157
// TypeInfo: 0x0000000144C19830
#include "../Core/DataContainer.h"
#include "../BattleAIShared/PathlinkSettings.h"
#include "../BattleAIShared/PathlinkMoverSettings.h"
#include "../BattleAIShared/AILocoBaseTaskData.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIPathLinkData : public Core::DataContainer {
        BattleAIShared::PathlinkSettings PathlinkSettings; // 0x18
        BattleAIShared::PathlinkMoverSettings PathlinkMoverSettings; // 0x30
        BattleAIShared::AILocoBaseTaskData WaypointData; // 0x40
    }; // 0x60
    static_assert(sizeof(AIPathLinkData) == 0x60);
}
#pragma pack(pop)