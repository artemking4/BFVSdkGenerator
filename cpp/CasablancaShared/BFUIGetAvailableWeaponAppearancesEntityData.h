// Object: BFUIGetAvailableWeaponAppearancesEntityData
// ClassId: 2216
// RuntimeId: 36669
// TypeInfo: 0x0000000144D83520
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUIWeaponInstanceObject.h"
#include "../CasablancaShared/UISoldierWeaponAppearanceSlot.h"
#include "../CasablancaShared/BFUIWeaponAppearanceObject.h"
#include "../CasablancaShared/BFUIWeaponAppearanceSetObject.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetAvailableWeaponAppearancesEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIWeaponInstanceObject Weapon; // 0x28
        CasablancaShared::UISoldierWeaponAppearanceSlot Slot; // 0x30
        char pad_0x34[0x4];
        CasablancaShared::BFUIWeaponAppearanceObject Appearance; // 0x38
        CasablancaShared::BFUIWeaponAppearanceSetObject AppearanceSet; // 0x40
        Boolean IncludeUnownedObjects; // 0x48
        Boolean ListUnownedObjectsLast; // 0x49
        char pad_0x4A[0x6];
    }; // 0x50
    static_assert(sizeof(BFUIGetAvailableWeaponAppearancesEntityData) == 0x50);
}
#pragma pack(pop)