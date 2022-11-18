// Object: SFBMEEntity
// ClassId: 7366
// RuntimeId: 47869
// TypeInfo: 0x0000000144CCE080
#include "../Entity/Entity.h"

namespace Casablanca {
    class SFBMEEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(SFBMEEntity) == 0x40);
}