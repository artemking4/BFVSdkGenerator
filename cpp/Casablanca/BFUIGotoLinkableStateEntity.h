// Object: BFUIGotoLinkableStateEntity
// ClassId: 6247
// RuntimeId: 3
// TypeInfo: 0x0000000144CB08E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFUIGotoLinkableStateEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(BFUIGotoLinkableStateEntity) == 0x78);
}