// Object: BFUIEquipWeaponAppearanceSetEntityData
// ClassId: 2189
// RuntimeId: 22242
// TypeInfo: 0x0000000144D830A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIWeaponInstanceObject.h"
#include "../CasablancaShared/BFUIWeaponAppearanceInstanceObject.h"
#include "../CasablancaShared/BFUIWeaponAppearanceSetInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIEquipWeaponAppearanceSetEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIWeaponInstanceObject Weapon; // 0x28
        CasablancaShared::BFUIWeaponAppearanceInstanceObject Appearance; // 0x30
        CasablancaShared::BFUIWeaponAppearanceSetInstanceObject AppearanceSet; // 0x38
        Boolean SaveAutomatically; // 0x40
        Boolean SaveOnDeinit; // 0x41
        char pad_0x42[0x6];
    }; // 0x48
    static_assert(sizeof(BFUIEquipWeaponAppearanceSetEntityData) == 0x48);
}
#pragma pack(pop)