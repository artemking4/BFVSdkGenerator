// Object: ServerPlayerAliveFilterEntity
// ClassId: 7665
// RuntimeId: 3245
// TypeInfo: 0x0000000144C3E750
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPlayerAliveFilterEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerPlayerAliveFilterEntity) == 0x30);
}