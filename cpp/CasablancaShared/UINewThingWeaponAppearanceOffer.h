// Object: UINewThingWeaponAppearanceOffer
// ClassId: 5335
// RuntimeId: 1684
// TypeInfo: 0x0000000144D5DD60
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUIWeaponObject.h"
#include "../CasablancaShared/BFUIWeaponAppearanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingWeaponAppearanceOffer : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUIWeaponObject Weapon; // 0x28
        CasablancaShared::BFUIWeaponAppearanceObject WeaponAppearance; // 0x30
    }; // 0x38
    static_assert(sizeof(UINewThingWeaponAppearanceOffer) == 0x38);
}
#pragma pack(pop)