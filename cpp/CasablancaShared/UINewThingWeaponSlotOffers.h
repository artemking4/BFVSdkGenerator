// Object: UINewThingWeaponSlotOffers
// ClassId: 5340
// RuntimeId: 34254
// TypeInfo: 0x0000000144D5DF60
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUISoldierClassObject.h"
#include "../CasablancaShared/UISoldierWeaponSlot.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingWeaponSlotOffers : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUISoldierClassObject SoldierClass; // 0x28
        CasablancaShared::UISoldierWeaponSlot Slot; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(UINewThingWeaponSlotOffers) == 0x38);
}
#pragma pack(pop)