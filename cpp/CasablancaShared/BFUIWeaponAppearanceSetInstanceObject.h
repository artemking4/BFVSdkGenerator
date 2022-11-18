// Object: BFUIWeaponAppearanceSetInstanceObject
// ClassId: 4142
// RuntimeId: 20277
// TypeInfo: 0x0000000144D7F220
#include "../CasablancaShared/BFUIWeaponAppearanceSetObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIWeaponAppearanceSetInstanceObject : public CasablancaShared::BFUIWeaponAppearanceSetObject {
        char pad_0x28[0x10];
    }; // 0x38
    static_assert(sizeof(BFUIWeaponAppearanceSetInstanceObject) == 0x38);
}
#pragma pack(pop)