// Object: DiceUIDeepLinkPayloadEntity
// ClassId: 7122
// RuntimeId: 12675
// TypeInfo: 0x0000000144DAD090
#include "../Entity/Entity.h"

namespace DiceCommons {
    class DiceUIDeepLinkPayloadEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(DiceUIDeepLinkPayloadEntity) == 0x50);
}