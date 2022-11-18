// Object: BFUIWeaponAppearanceSlotObjectList
// ClassId: 5504
// RuntimeId: 27377
// TypeInfo: 0x0000000144D7F520
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUIWeaponAppearanceSlotObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIWeaponAppearanceSlotObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUIWeaponAppearanceSlotObject> WeaponAppearanceSlots; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIWeaponAppearanceSlotObjectList) == 0x20);
}
#pragma pack(pop)