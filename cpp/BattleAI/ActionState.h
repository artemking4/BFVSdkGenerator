// Object: ActionState
// RuntimeId: 63711
// TypeInfo: 0x0000000144BEF860

namespace BattleAI {
    enum ActionState {
        ActionState_Idle = 0,
        ActionState_Approach = 1,
        ActionState_Running = 2,
        ActionState_Cooldown = 3,
        ActionState_Completed = 4,
        ActionState_Aborted = 5,
        ActionState_Count = 6
    };
}