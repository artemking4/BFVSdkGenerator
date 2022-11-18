// Object: ServerGameRoundEntity
// ClassId: 7565
// RuntimeId: 29791
// TypeInfo: 0x0000000144CE6DB0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerGameRoundEntity : public Entity::Entity {
        char pad_0x20[0x88];
    }; // 0xA8
    static_assert(sizeof(ServerGameRoundEntity) == 0xA8);
}