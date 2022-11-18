// Object: ServerPlayerDeathTypeEntity
// ClassId: 7667
// RuntimeId: 63074
// TypeInfo: 0x0000000144CEB6C0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPlayerDeathTypeEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ServerPlayerDeathTypeEntity) == 0x40);
}