// Object: UINewThingSoldierWeaponSpecTreeItem
// ClassId: 5313
// RuntimeId: 18136
// TypeInfo: 0x0000000144D5E5E0
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUIWeaponInstanceObject.h"
#include "../CasablancaShared/BFUISpecTreeItemInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingSoldierWeaponSpecTreeItem : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUIWeaponInstanceObject Weapon; // 0x28
        CasablancaShared::BFUISpecTreeItemInstanceObject Item; // 0x30
    }; // 0x38
    static_assert(sizeof(UINewThingSoldierWeaponSpecTreeItem) == 0x38);
}
#pragma pack(pop)