// Object: SoundContextLinkEntity
// ClassId: 7818
// RuntimeId: 21422
// TypeInfo: 0x0000000144E20950
#include "../Entity/Entity.h"

namespace Audio {
    class SoundContextLinkEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(SoundContextLinkEntity) == 0x30);
}