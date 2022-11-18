// Object: SquadReinforcementSpecificModifierUnlock
// ClassId: 1433
// RuntimeId: 32771
// TypeInfo: 0x0000000144D40AD0
#include "../CasablancaShared/ContextSpecificModifierUnlock.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SquadReinforcementSpecificModifierUnlock : public CasablancaShared::ContextSpecificModifierUnlock {
        Boolean WhenUsingRadio; // 0x28
        Boolean WhenUsingBinoculars; // 0x29
        char pad_0x2A[0x6];
    }; // 0x30
    static_assert(sizeof(SquadReinforcementSpecificModifierUnlock) == 0x30);
}
#pragma pack(pop)