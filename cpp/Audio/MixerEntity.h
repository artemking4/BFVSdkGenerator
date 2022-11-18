// Object: MixerEntity
// ClassId: 7262
// RuntimeId: 33472
// TypeInfo: 0x0000000144E20E50
#include "../Entity/Entity.h"

namespace Audio {
    class MixerEntity : public Entity::Entity {
        char pad_0x20[0x98];
    }; // 0xB8
    static_assert(sizeof(MixerEntity) == 0xB8);
}