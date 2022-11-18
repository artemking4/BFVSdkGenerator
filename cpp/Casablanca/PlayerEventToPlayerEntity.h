// Object: PlayerEventToPlayerEntity
// ClassId: 7311
// RuntimeId: 36205
// TypeInfo: 0x0000000144CE5450
#include "../Entity/Entity.h"

namespace Casablanca {
    class PlayerEventToPlayerEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(PlayerEventToPlayerEntity) == 0x48);
}