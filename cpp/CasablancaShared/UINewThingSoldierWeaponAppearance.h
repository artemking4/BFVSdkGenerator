// Object: UINewThingSoldierWeaponAppearance
// ClassId: 5308
// RuntimeId: 3218
// TypeInfo: 0x0000000144D5E6E0
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUIWeaponInstanceObject.h"
#include "../CasablancaShared/UISoldierWeaponAppearanceSlot.h"
#include "../CasablancaShared/BFUIWeaponAppearanceInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingSoldierWeaponAppearance : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUIWeaponInstanceObject Weapon; // 0x28
        CasablancaShared::UISoldierWeaponAppearanceSlot Slot; // 0x30
        char pad_0x34[0x4];
        CasablancaShared::BFUIWeaponAppearanceInstanceObject Appearance; // 0x38
    }; // 0x40
    static_assert(sizeof(UINewThingSoldierWeaponAppearance) == 0x40);
}
#pragma pack(pop)