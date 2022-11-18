// Object: FacingCondition
// ClassId: 91
// RuntimeId: 31076
// TypeInfo: 0x0000000144BEF660
#include "../BattleAI/ActionCondition.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAI {
    class FacingCondition : public BattleAI::ActionCondition {
        Float32 MaxAngle; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(FacingCondition) == 0x20);
}
#pragma pack(pop)