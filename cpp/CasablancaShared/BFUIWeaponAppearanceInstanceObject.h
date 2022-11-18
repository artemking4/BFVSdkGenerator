// Object: BFUIWeaponAppearanceInstanceObject
// ClassId: 4140
// RuntimeId: 62979
// TypeInfo: 0x0000000144D7F320
#include "../CasablancaShared/BFUIWeaponAppearanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIWeaponAppearanceInstanceObject : public CasablancaShared::BFUIWeaponAppearanceObject {
        char pad_0x28[0x10];
    }; // 0x38
    static_assert(sizeof(BFUIWeaponAppearanceInstanceObject) == 0x38);
}
#pragma pack(pop)