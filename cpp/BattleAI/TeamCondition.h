// Object: TeamCondition
// ClassId: 95
// RuntimeId: 36503
// TypeInfo: 0x0000000144BEF460
#include "../BattleAI/ActionCondition.h"
#include "../BattleAI/TeamPermissionOperation.h"
#include "../GameShared/TeamId.h"

#pragma pack(push, 8)
namespace BattleAI {
    class TeamCondition : public BattleAI::ActionCondition {
        BattleAI::TeamPermissionOperation Operation; // 0x18
        GameShared::TeamId Team; // 0x1C
    }; // 0x20
    static_assert(sizeof(TeamCondition) == 0x20);
}
#pragma pack(pop)