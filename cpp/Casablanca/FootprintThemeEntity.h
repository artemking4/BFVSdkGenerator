// Object: FootprintThemeEntity
// ClassId: 7181
// RuntimeId: 42543
// TypeInfo: 0x0000000144C1FD70
#include "../Entity/Entity.h"

namespace Casablanca {
    class FootprintThemeEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(FootprintThemeEntity) == 0x38);
}