// Object: BFUIGetAvailableWeaponsEntityData
// ClassId: 2217
// RuntimeId: 52581
// TypeInfo: 0x0000000144D838A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUISoldierInstanceObject.h"
#include "../CasablancaShared/UISoldierWeaponSlot.h"
#include "../CasablancaShared/BFUIWeaponObject.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetAvailableWeaponsEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUISoldierInstanceObject Soldier; // 0x28
        CasablancaShared::UISoldierWeaponSlot Slot; // 0x30
        char pad_0x34[0x4];
        CasablancaShared::BFUIWeaponObject Weapon; // 0x38
        Boolean IncludeUnownedObjects; // 0x40
        Boolean ListUnownedObjectsLast; // 0x41
        Boolean ExcludeUnownedWeaponClasses; // 0x42
        char pad_0x43[0x5];
    }; // 0x48
    static_assert(sizeof(BFUIGetAvailableWeaponsEntityData) == 0x48);
}
#pragma pack(pop)