// Object: ClientBFUIWeaponClassObjectEntity
// ClassId: 6607
// RuntimeId: 14286
// TypeInfo: 0x0000000144C89CB0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIWeaponClassObjectEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUIWeaponClassObjectEntity) == 0x40);
}