// Object: UINewThingSoldierWeaponSlot
// ClassId: 5311
// RuntimeId: 41707
// TypeInfo: 0x0000000144D5E960
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUISoldierInstanceObject.h"
#include "../CasablancaShared/UISoldierWeaponSlot.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingSoldierWeaponSlot : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUISoldierInstanceObject Soldier; // 0x28
        CasablancaShared::UISoldierWeaponSlot Slot; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(UINewThingSoldierWeaponSlot) == 0x38);
}
#pragma pack(pop)