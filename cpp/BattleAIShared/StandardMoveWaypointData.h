// Object: StandardMoveWaypointData
// ClassId: 5650
// RuntimeId: 31509
// TypeInfo: 0x0000000144C11480
#include "../BattleAIShared/AbstractLocoWaypointData.h"
#include "../BattleAIShared/AILocoMoveTaskData.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class StandardMoveWaypointData : public BattleAIShared::AbstractLocoWaypointData {
        char pad_0x48[0x8];
        BattleAIShared::AILocoMoveTaskData MoveTask; // 0x50
    }; // 0x80
    static_assert(sizeof(StandardMoveWaypointData) == 0x80);
}
#pragma pack(pop)