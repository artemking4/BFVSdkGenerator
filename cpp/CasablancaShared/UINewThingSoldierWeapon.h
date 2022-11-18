// Object: UINewThingSoldierWeapon
// ClassId: 5307
// RuntimeId: 4294
// TypeInfo: 0x0000000144D5E8E0
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUIWeaponInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingSoldierWeapon : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUIWeaponInstanceObject Weapon; // 0x28
    }; // 0x30
    static_assert(sizeof(UINewThingSoldierWeapon) == 0x30);
}
#pragma pack(pop)