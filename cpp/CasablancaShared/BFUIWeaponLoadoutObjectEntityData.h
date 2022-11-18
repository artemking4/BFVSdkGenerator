// Object: BFUIWeaponLoadoutObjectEntityData
// ClassId: 2426
// RuntimeId: 37023
// TypeInfo: 0x0000000144D84C20
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUIWeaponLoadoutStruct.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIWeaponLoadoutObjectEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIWeaponLoadoutStruct StaticWeaponLoadout; // 0x28
    }; // 0x58
    static_assert(sizeof(BFUIWeaponLoadoutObjectEntityData) == 0x58);
}
#pragma pack(pop)