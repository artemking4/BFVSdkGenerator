// Object: SoundContextEntity
// ClassId: 7817
// RuntimeId: 23501
// TypeInfo: 0x0000000144E20A60
#include "../Entity/Entity.h"

namespace Audio {
    class SoundContextEntity : public Entity::Entity {
        char pad_0x20[0xB0];
    }; // 0xD0
    static_assert(sizeof(SoundContextEntity) == 0xD0);
}