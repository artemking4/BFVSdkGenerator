// Object: BelowSpeedModifier
// ClassId: 1498
// RuntimeId: 37388
// TypeInfo: 0x0000000144D4AA70
#include "../CasablancaShared/DamageModifierBaseData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BelowSpeedModifier : public CasablancaShared::DamageModifierBaseData {
        Float32 ModifierValidBelowSpeed; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(BelowSpeedModifier) == 0x28);
}
#pragma pack(pop)