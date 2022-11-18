// Object: BFUIWeaponAppearanceObject
// ClassId: 4139
// RuntimeId: 46980
// TypeInfo: 0x0000000144D7F3A0
#include "../CasablancaShared/Identifiable.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIWeaponAppearanceObject : public CasablancaShared::Identifiable {
        char pad_0x18[0x10];
    }; // 0x28
    static_assert(sizeof(BFUIWeaponAppearanceObject) == 0x28);
}
#pragma pack(pop)