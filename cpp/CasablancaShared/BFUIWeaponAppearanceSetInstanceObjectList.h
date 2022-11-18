// Object: BFUIWeaponAppearanceSetInstanceObjectList
// ClassId: 5502
// RuntimeId: 24378
// TypeInfo: 0x0000000144D843A0
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUIWeaponAppearanceSetInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIWeaponAppearanceSetInstanceObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUIWeaponAppearanceSetInstanceObject> WeaponAppearanceSets; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIWeaponAppearanceSetInstanceObjectList) == 0x20);
}
#pragma pack(pop)