// Object: RangeCondition
// ClassId: 94
// RuntimeId: 13028
// TypeInfo: 0x0000000144BEF6E0
#include "../BattleAI/ActionCondition.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAI {
    class RangeCondition : public BattleAI::ActionCondition {
        Float32 Radius; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(RangeCondition) == 0x20);
}
#pragma pack(pop)