// Object: BFUIGetSoldiersForWeaponEntityData
// ClassId: 2248
// RuntimeId: 62990
// TypeInfo: 0x0000000144D85A20
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUIWeaponInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetSoldiersForWeaponEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIWeaponInstanceObject Weapon; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUIGetSoldiersForWeaponEntityData) == 0x30);
}
#pragma pack(pop)