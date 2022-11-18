// Object: GameLanguageEntity
// ClassId: 7187
// RuntimeId: 42232
// TypeInfo: 0x0000000144CB69F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class GameLanguageEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(GameLanguageEntity) == 0x30);
}