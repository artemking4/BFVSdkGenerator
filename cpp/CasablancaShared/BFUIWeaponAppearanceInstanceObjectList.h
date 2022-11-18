// Object: BFUIWeaponAppearanceInstanceObjectList
// ClassId: 5500
// RuntimeId: 18201
// TypeInfo: 0x0000000144D844A0
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUIWeaponAppearanceInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIWeaponAppearanceInstanceObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUIWeaponAppearanceInstanceObject> WeaponAppearances; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIWeaponAppearanceInstanceObjectList) == 0x20);
}
#pragma pack(pop)