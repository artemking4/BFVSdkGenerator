// Object: UINewThingSoldierWeaponSpecTree
// ClassId: 5312
// RuntimeId: 56845
// TypeInfo: 0x0000000144D5E660
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUIWeaponInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingSoldierWeaponSpecTree : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUIWeaponInstanceObject Weapon; // 0x28
    }; // 0x30
    static_assert(sizeof(UINewThingSoldierWeaponSpecTree) == 0x30);
}
#pragma pack(pop)