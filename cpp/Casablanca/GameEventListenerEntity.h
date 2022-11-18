// Object: GameEventListenerEntity
// ClassId: 7186
// RuntimeId: 28836
// TypeInfo: 0x0000000144CB6B00
#include "../Entity/Entity.h"

namespace Casablanca {
    class GameEventListenerEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(GameEventListenerEntity) == 0x40);
}