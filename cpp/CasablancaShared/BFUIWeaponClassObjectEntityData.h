// Object: BFUIWeaponClassObjectEntityData
// ClassId: 2424
// RuntimeId: 30122
// TypeInfo: 0x0000000144D850A0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUIWeaponClassStruct.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIWeaponClassObjectEntityData : public Entity::EntityData {
        CasablancaShared::BFUIWeaponClassStruct StaticWeaponClass; // 0x20
    }; // 0x30
    static_assert(sizeof(BFUIWeaponClassObjectEntityData) == 0x30);
}
#pragma pack(pop)