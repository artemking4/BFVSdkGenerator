// Object: TargetModifier
// ClassId: 5046
// RuntimeId: 11018
// TypeInfo: 0x0000000144C05B60
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class TargetModifier : public Core::DataContainer {
        Boolean SquadSuppression; // 0x18
        Boolean AlwaysTargetHuman; // 0x19
        char pad_0x1A[0x6];
    }; // 0x20
    static_assert(sizeof(TargetModifier) == 0x20);
}
#pragma pack(pop)