// Object: StandardMovePathlinkData
// ClassId: 81
// RuntimeId: 12465
// TypeInfo: 0x0000000144C185B0
#include "../BattleAIShared/AIPathLinkData.h"
#include "../BattleAIShared/AILocoMoveTaskData.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class StandardMovePathlinkData : public BattleAIShared::AIPathLinkData {
        BattleAIShared::AILocoMoveTaskData MoveData; // 0x60
    }; // 0x90
    static_assert(sizeof(StandardMovePathlinkData) == 0x90);
}
#pragma pack(pop)