// Object: ActionEntityData
// ClassId: 3253
// RuntimeId: 44273
// TypeInfo: 0x0000000144BEF3E0
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"
#include "../BattleAI/ActionCondition.h"
#include "../Global/Float32.h"
#include "../BattleAI/ValidInState.h"

#pragma pack(push, 16)
namespace BattleAI {
    class ActionEntityData : public Entity::SpatialEntityData {
        Array<BattleAI::ActionCondition> Conditions; // 0x60
        Float32 WaitTimeBeforeExecuting; // 0x68
        Float32 CooldownTime; // 0x6C
        Float32 TimeoutDuration; // 0x70
        BattleAI::ValidInState ValidInState; // 0x74
        Boolean Enabled; // 0x78
        Boolean MoveToActionBeforeExecuting; // 0x79
        Boolean AlignToActionBeforeExecuting; // 0x7A
        Boolean AbortWhenAlerted; // 0x7B
        Boolean AbortWhenTimedOut; // 0x7C
        Boolean ShouldBeExecutedByClosestAI; // 0x7D
        Boolean IsLinkedAction; // 0x7E
        Boolean RestrictToLinkedSoldiers; // 0x7F
        Boolean IsChainedAction; // 0x80
        Boolean IgnoreConditionsWhenChained; // 0x81
        char pad_0x82[0xE];
    }; // 0x90
    static_assert(sizeof(ActionEntityData) == 0x90);
}
#pragma pack(pop)