// Object: ClientProjectileStateEntity
// ClassId: 6824
// RuntimeId: 39013
// TypeInfo: 0x0000000144C220A0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientProjectileStateEntity : public Entity::Entity {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(ClientProjectileStateEntity) == 0xC0);
}