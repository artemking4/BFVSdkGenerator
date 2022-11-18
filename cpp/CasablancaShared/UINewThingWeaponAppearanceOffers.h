// Object: UINewThingWeaponAppearanceOffers
// ClassId: 5336
// RuntimeId: 18703
// TypeInfo: 0x0000000144D5DE60
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUISoldierClassObject.h"
#include "../CasablancaShared/BFUIWeaponObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingWeaponAppearanceOffers : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUISoldierClassObject SoldierClass; // 0x28
        CasablancaShared::BFUIWeaponObject Weapon; // 0x30
    }; // 0x38
    static_assert(sizeof(UINewThingWeaponAppearanceOffers) == 0x38);
}
#pragma pack(pop)