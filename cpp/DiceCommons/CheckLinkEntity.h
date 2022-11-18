// Object: CheckLinkEntity
// ClassId: 6299
// RuntimeId: 43801
// TypeInfo: 0x0000000144DAF810
#include "../Entity/Entity.h"

namespace DiceCommons {
    class CheckLinkEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(CheckLinkEntity) == 0x38);
}