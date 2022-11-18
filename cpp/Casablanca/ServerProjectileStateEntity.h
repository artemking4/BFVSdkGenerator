// Object: ServerProjectileStateEntity
// ClassId: 7676
// RuntimeId: 56073
// TypeInfo: 0x0000000144C40250
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerProjectileStateEntity : public Entity::Entity {
        char pad_0x20[0x98];
    }; // 0xB8
    static_assert(sizeof(ServerProjectileStateEntity) == 0xB8);
}