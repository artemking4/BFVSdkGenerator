// Object: TwinkleFromJsEventEntity
// ClassId: 8111
// RuntimeId: 8447
// TypeInfo: 0x0000000144F654A0
#include "../Entity/Entity.h"

namespace Twinkle {
    class TwinkleFromJsEventEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(TwinkleFromJsEventEntity) == 0x80);
}