// Object: BFUIGetWeaponLoadoutEntityData
// ClassId: 2277
// RuntimeId: 46199
// TypeInfo: 0x0000000144D82C20
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUIWeaponInstanceObject.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/UISoldierWeaponAppearanceSlot.h"
#include "../CasablancaShared/BFUIWeaponAppearanceObject.h"
#include "../CasablancaShared/BFUIWeaponAppearanceSetObject.h"
#include "../CasablancaShared/BFUISpecTreeItemInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetWeaponLoadoutEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIWeaponInstanceObject Weapon; // 0x28
        CasablancaShared::UISoldierWeaponAppearanceSlot PreviewAppearanceSlot; // 0x30
        char pad_0x34[0x4];
        CasablancaShared::BFUIWeaponAppearanceObject PreviewAppearanceObject; // 0x38
        CasablancaShared::BFUIWeaponAppearanceSetObject PreviewAppearanceSetObject; // 0x40
        CasablancaShared::BFUISpecTreeItemInstanceObject PreviewSpecTreeItem; // 0x48
        Boolean PreviewAppearance; // 0x50
        Boolean ShowOwnedSetItemsOnly; // 0x51
        Boolean PreviewSpecTreeItemEnabled; // 0x52
        char pad_0x53[0x5];
    }; // 0x58
    static_assert(sizeof(BFUIGetWeaponLoadoutEntityData) == 0x58);
}
#pragma pack(pop)