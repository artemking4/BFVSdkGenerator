// Object: StateModifier
// ClassId: 1501
// RuntimeId: 41528
// TypeInfo: 0x0000000144D4AB70
#include "../CasablancaShared/DamageModifierBaseData.h"
#include "../Physics/CharacterStateType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class StateModifier : public CasablancaShared::DamageModifierBaseData {
        Physics::CharacterStateType State; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(StateModifier) == 0x28);
}
#pragma pack(pop)