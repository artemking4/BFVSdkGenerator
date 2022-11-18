// Object: CharacterLightingComponent
// ClassId: 5749
// RuntimeId: 23222
// TypeInfo: 0x0000000144EC7330
#include "../Entity/Component.h"

namespace WorldSim {
    class CharacterLightingComponent : public Entity::Component {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(CharacterLightingComponent) == 0x70);
}