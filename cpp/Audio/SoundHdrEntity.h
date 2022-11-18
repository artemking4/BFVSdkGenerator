// Object: SoundHdrEntity
// ClassId: 7821
// RuntimeId: 55779
// TypeInfo: 0x0000000144E20620
#include "../Entity/Entity.h"

namespace Audio {
    class SoundHdrEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(SoundHdrEntity) == 0x38);
}