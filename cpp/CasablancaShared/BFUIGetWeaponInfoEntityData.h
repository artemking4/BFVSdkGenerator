// Object: BFUIGetWeaponInfoEntityData
// ClassId: 2276
// RuntimeId: 50668
// TypeInfo: 0x0000000144D83920
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUIWeaponInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetWeaponInfoEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIWeaponInstanceObject Weapon; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUIGetWeaponInfoEntityData) == 0x30);
}
#pragma pack(pop)