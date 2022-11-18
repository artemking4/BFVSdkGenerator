// Object: ServerPickupListenerEntity
// ClassId: 7652
// RuntimeId: 61581
// TypeInfo: 0x0000000144CEB9F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPickupListenerEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ServerPickupListenerEntity) == 0x48);
}