// Object: DiceUIDeepLinkListenerEntity
// ClassId: 7120
// RuntimeId: 52792
// TypeInfo: 0x0000000144DAD2B0
#include "../Entity/Entity.h"

namespace DiceCommons {
    class DiceUIDeepLinkListenerEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(DiceUIDeepLinkListenerEntity) == 0x60);
}