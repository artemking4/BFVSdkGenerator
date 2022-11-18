// Object: GameViewQueryEntity
// ClassId: 7188
// RuntimeId: 61927
// TypeInfo: 0x0000000144C8BFB0
#include "../Entity/Entity.h"

namespace Casablanca {
    class GameViewQueryEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(GameViewQueryEntity) == 0x30);
}