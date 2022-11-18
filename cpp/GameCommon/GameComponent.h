// Object: GameComponent
// ClassId: 5765
// RuntimeId: 16975
// TypeInfo: 0x0000000144E4C8F0
#include "../Entity/Component.h"

namespace GameCommon {
    class GameComponent : public Entity::Component {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(GameComponent) == 0x30);
}