// Object: TwinkleOverlayStateQueryEntity
// ClassId: 8113
// RuntimeId: 29620
// TypeInfo: 0x0000000144F65170
#include "../Entity/Entity.h"

namespace Twinkle {
    class TwinkleOverlayStateQueryEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(TwinkleOverlayStateQueryEntity) == 0x38);
}