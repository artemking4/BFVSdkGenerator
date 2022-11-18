// Object: BFUIWeaponAppearanceObjectList
// ClassId: 5501
// RuntimeId: 40014
// TypeInfo: 0x0000000144D84520
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUIWeaponAppearanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIWeaponAppearanceObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUIWeaponAppearanceObject> WeaponAppearances; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIWeaponAppearanceObjectList) == 0x20);
}
#pragma pack(pop)