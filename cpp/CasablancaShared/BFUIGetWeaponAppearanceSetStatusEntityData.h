// Object: BFUIGetWeaponAppearanceSetStatusEntityData
// ClassId: 2273
// RuntimeId: 23116
// TypeInfo: 0x0000000144D83020
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIWeaponInstanceObject.h"
#include "../CasablancaShared/BFUIWeaponAppearanceInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetWeaponAppearanceSetStatusEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIWeaponInstanceObject Weapon; // 0x28
        CasablancaShared::BFUIWeaponAppearanceInstanceObject Appearance; // 0x30
        Boolean UpdateAutomatically; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(BFUIGetWeaponAppearanceSetStatusEntityData) == 0x40);
}
#pragma pack(pop)