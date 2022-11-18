// Object: UINewThingSoldierWeaponInstance
// ClassId: 5310
// RuntimeId: 24855
// TypeInfo: 0x0000000144D5E860
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUIWeaponInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingSoldierWeaponInstance : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUIWeaponInstanceObject Weapon; // 0x28
    }; // 0x30
    static_assert(sizeof(UINewThingSoldierWeaponInstance) == 0x30);
}
#pragma pack(pop)