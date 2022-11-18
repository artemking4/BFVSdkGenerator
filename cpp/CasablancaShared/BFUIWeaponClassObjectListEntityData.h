// Object: BFUIWeaponClassObjectListEntityData
// ClassId: 2425
// RuntimeId: 26839
// TypeInfo: 0x0000000144D85020
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUIWeaponClassStruct.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIWeaponClassObjectListEntityData : public Entity::EntityData {
        Array<CasablancaShared::BFUIWeaponClassStruct> StaticWeaponClassList; // 0x20
    }; // 0x28
    static_assert(sizeof(BFUIWeaponClassObjectListEntityData) == 0x28);
}
#pragma pack(pop)