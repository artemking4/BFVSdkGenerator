// Object: DiceUIDeepLinkNavigationEntity
// ClassId: 7121
// RuntimeId: 36231
// TypeInfo: 0x0000000144DAD1A0
#include "../Entity/Entity.h"

namespace DiceCommons {
    class DiceUIDeepLinkNavigationEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(DiceUIDeepLinkNavigationEntity) == 0x38);
}