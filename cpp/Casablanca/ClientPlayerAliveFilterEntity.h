// Object: ClientPlayerAliveFilterEntity
// ClassId: 6799
// RuntimeId: 55613
// TypeInfo: 0x0000000144C55100
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPlayerAliveFilterEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientPlayerAliveFilterEntity) == 0x30);
}