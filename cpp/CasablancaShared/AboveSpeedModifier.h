// Object: AboveSpeedModifier
// ClassId: 1497
// RuntimeId: 10624
// TypeInfo: 0x0000000144D4A9F0
#include "../CasablancaShared/DamageModifierBaseData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AboveSpeedModifier : public CasablancaShared::DamageModifierBaseData {
        Float32 ModifierValidAboveSpeed; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(AboveSpeedModifier) == 0x28);
}
#pragma pack(pop)