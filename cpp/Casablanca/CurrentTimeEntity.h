// Object: CurrentTimeEntity
// ClassId: 7099
// RuntimeId: 52664
// TypeInfo: 0x0000000144C4A590
#include "../Entity/Entity.h"

namespace Casablanca {
    class CurrentTimeEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(CurrentTimeEntity) == 0x40);
}