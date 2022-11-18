// Object: BFUIGetAvailableWeaponAppearanceSetsEntityData
// ClassId: 2215
// RuntimeId: 2734
// TypeInfo: 0x0000000144D834A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUIWeaponInstanceObject.h"
#include "../CasablancaShared/BFUIWeaponAppearanceSetObject.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetAvailableWeaponAppearanceSetsEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIWeaponInstanceObject Weapon; // 0x28
        CasablancaShared::BFUIWeaponAppearanceSetObject AppearanceSet; // 0x30
        Boolean IncludeUnownedObjects; // 0x38
        Boolean ListUnownedObjectsLast; // 0x39
        char pad_0x3A[0x6];
    }; // 0x40
    static_assert(sizeof(BFUIGetAvailableWeaponAppearanceSetsEntityData) == 0x40);
}
#pragma pack(pop)