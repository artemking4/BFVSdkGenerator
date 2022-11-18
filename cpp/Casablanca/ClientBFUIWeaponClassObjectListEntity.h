// Object: ClientBFUIWeaponClassObjectListEntity
// ClassId: 6608
// RuntimeId: 57985
// TypeInfo: 0x0000000144C89BA0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIWeaponClassObjectListEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUIWeaponClassObjectListEntity) == 0x40);
}