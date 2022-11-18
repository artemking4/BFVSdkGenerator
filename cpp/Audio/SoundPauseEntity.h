// Object: SoundPauseEntity
// ClassId: 7823
// RuntimeId: 55856
// TypeInfo: 0x0000000144E1F820
#include "../Entity/Entity.h"

namespace Audio {
    class SoundPauseEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(SoundPauseEntity) == 0x38);
}