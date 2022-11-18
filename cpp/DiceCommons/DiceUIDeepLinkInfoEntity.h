// Object: DiceUIDeepLinkInfoEntity
// ClassId: 7119
// RuntimeId: 41894
// TypeInfo: 0x0000000144DAD3C0
#include "../Entity/Entity.h"

namespace DiceCommons {
    class DiceUIDeepLinkInfoEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(DiceUIDeepLinkInfoEntity) == 0x40);
}