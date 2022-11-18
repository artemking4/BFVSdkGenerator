// Object: SprintModifier
// ClassId: 1500
// RuntimeId: 13241
// TypeInfo: 0x0000000144D4AAF0
#include "../CasablancaShared/DamageModifierBaseData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SprintModifier : public CasablancaShared::DamageModifierBaseData {
        Boolean Invert; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(SprintModifier) == 0x28);
}
#pragma pack(pop)