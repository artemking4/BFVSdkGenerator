// Object: TwinkleOverlayEntity
// ClassId: 8112
// RuntimeId: 36929
// TypeInfo: 0x0000000144F65280
#include "../Entity/Entity.h"

namespace Twinkle {
    class TwinkleOverlayEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(TwinkleOverlayEntity) == 0x38);
}