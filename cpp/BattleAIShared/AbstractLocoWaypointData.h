// Object: AbstractLocoWaypointData
// ClassId: 5647
// RuntimeId: 24213
// TypeInfo: 0x0000000144C11600
#include "../PathfindingShared/WaypointData.h"
#include "../BattleAIShared/AILocoBaseTaskData.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AbstractLocoWaypointData : public PathfindingShared::WaypointData {
        BattleAIShared::AILocoBaseTaskData BaseTask; // 0x28
    }; // 0x48
    static_assert(sizeof(AbstractLocoWaypointData) == 0x48);
}
#pragma pack(pop)