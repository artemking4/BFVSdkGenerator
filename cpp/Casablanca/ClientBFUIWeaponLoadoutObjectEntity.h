// Object: ClientBFUIWeaponLoadoutObjectEntity
// ClassId: 6609
// RuntimeId: 58356
// TypeInfo: 0x0000000144C89A90
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIWeaponLoadoutObjectEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUIWeaponLoadoutObjectEntity) == 0x40);
}