// Object: BFUIWeaponAppearanceSetObjectList
// ClassId: 5503
// RuntimeId: 30475
// TypeInfo: 0x0000000144D84420
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUIWeaponAppearanceSetObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIWeaponAppearanceSetObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUIWeaponAppearanceSetObject> WeaponAppearanceSets; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIWeaponAppearanceSetObjectList) == 0x20);
}
#pragma pack(pop)