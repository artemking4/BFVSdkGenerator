// Object: BFUIGetSoldierLoadoutEntityData
// ClassId: 2246
// RuntimeId: 54464
// TypeInfo: 0x0000000144D82D20
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUISoldierInstanceObject.h"
#include "../CasablancaShared/UISoldierWeaponSlot.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIBodyInstanceObject.h"
#include "../CasablancaShared/UISoldierAppearanceSlot.h"
#include "../CasablancaShared/BFUIAppearanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetSoldierLoadoutEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUISoldierInstanceObject Soldier; // 0x28
        CasablancaShared::UISoldierWeaponSlot SoldierWeaponSlot; // 0x30
        char pad_0x34[0x4];
        CasablancaShared::BFUIBodyInstanceObject PreviewBodyObject; // 0x38
        CasablancaShared::UISoldierAppearanceSlot PreviewAppearanceSlot; // 0x40
        char pad_0x44[0x4];
        CasablancaShared::BFUIAppearanceObject PreviewAppearanceObject; // 0x48
        Boolean PreviewBody; // 0x50
        Boolean PreviewAppearance; // 0x51
        char pad_0x52[0x6];
    }; // 0x58
    static_assert(sizeof(BFUIGetSoldierLoadoutEntityData) == 0x58);
}
#pragma pack(pop)