// Object: GameEventCreatorEntity
// ClassId: 7185
// RuntimeId: 2066
// TypeInfo: 0x0000000144CB6C10
#include "../Entity/Entity.h"

namespace Casablanca {
    class GameEventCreatorEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(GameEventCreatorEntity) == 0x58);
}