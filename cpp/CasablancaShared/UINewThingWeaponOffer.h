// Object: UINewThingWeaponOffer
// ClassId: 5338
// RuntimeId: 57421
// TypeInfo: 0x0000000144D5DEE0
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUISoldierClassObject.h"
#include "../CasablancaShared/BFUIWeaponObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingWeaponOffer : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUISoldierClassObject SoldierClass; // 0x28
        CasablancaShared::BFUIWeaponObject Weapon; // 0x30
    }; // 0x38
    static_assert(sizeof(UINewThingWeaponOffer) == 0x38);
}
#pragma pack(pop)