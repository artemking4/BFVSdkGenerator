// Object: PlayerContextToPlayerEntity
// ClassId: 7309
// RuntimeId: 51889
// TypeInfo: 0x0000000144CE5560
#include "../Entity/Entity.h"

namespace Casablanca {
    class PlayerContextToPlayerEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(PlayerContextToPlayerEntity) == 0x38);
}