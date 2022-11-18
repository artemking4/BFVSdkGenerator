// Object: SoundEntity
// ClassId: 7820
// RuntimeId: 65497
// TypeInfo: 0x0000000144E20730
#include "../Entity/Entity.h"

namespace Audio {
    class SoundEntity : public Entity::Entity {
        char pad_0x20[0xD0];
    }; // 0xF0
    static_assert(sizeof(SoundEntity) == 0xF0);
}