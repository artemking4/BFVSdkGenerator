// Object: BFUIGetUniqueWeaponClassesEntityData
// ClassId: 2262
// RuntimeId: 19534
// TypeInfo: 0x0000000144D85AA0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUIWeaponInstanceObjectList.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetUniqueWeaponClassesEntityData : public Entity::EntityData {
        CasablancaShared::BFUIWeaponInstanceObjectList Weapons; // 0x20
    }; // 0x28
    static_assert(sizeof(BFUIGetUniqueWeaponClassesEntityData) == 0x28);
}
#pragma pack(pop)