// Object: UINewThingSoldierWeaponAppearances
// ClassId: 5309
// RuntimeId: 64280
// TypeInfo: 0x0000000144D5E760
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUIWeaponInstanceObject.h"
#include "../CasablancaShared/UISoldierWeaponAppearanceSlot.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingSoldierWeaponAppearances : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUIWeaponInstanceObject Weapon; // 0x28
        CasablancaShared::UISoldierWeaponAppearanceSlot Slot; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(UINewThingSoldierWeaponAppearances) == 0x38);
}
#pragma pack(pop)