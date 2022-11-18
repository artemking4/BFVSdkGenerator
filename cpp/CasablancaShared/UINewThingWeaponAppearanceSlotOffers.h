// Object: UINewThingWeaponAppearanceSlotOffers
// ClassId: 5337
// RuntimeId: 52022
// TypeInfo: 0x0000000144D5DDE0
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUIWeaponObject.h"
#include "../CasablancaShared/UISoldierWeaponAppearanceSlot.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingWeaponAppearanceSlotOffers : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUIWeaponObject Weapon; // 0x28
        CasablancaShared::UISoldierWeaponAppearanceSlot Slot; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(UINewThingWeaponAppearanceSlotOffers) == 0x38);
}
#pragma pack(pop)