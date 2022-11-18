// Object: BFUIWeaponAppearanceSlotObject
// ClassId: 4130
// RuntimeId: 57889
// TypeInfo: 0x0000000144D7F5A0
#include "../CasablancaShared/BFUIWeaponObject.h"
#include "../CasablancaShared/UISoldierWeaponAppearanceSlot.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIWeaponAppearanceSlotObject : public CasablancaShared::BFUIWeaponObject {
        CasablancaShared::UISoldierWeaponAppearanceSlot Slot; // 0x48
        char pad_0x4C[0x4];
    }; // 0x50
    static_assert(sizeof(BFUIWeaponAppearanceSlotObject) == 0x50);
}
#pragma pack(pop)