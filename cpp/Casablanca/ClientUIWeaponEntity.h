// Object: ClientUIWeaponEntity
// ClassId: 7026
// RuntimeId: 36932
// TypeInfo: 0x0000000144CB6E30
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIWeaponEntity : public Entity::Entity {
        char pad_0x20[0x190];
    }; // 0x1B0
    static_assert(sizeof(ClientUIWeaponEntity) == 0x1B0);
}