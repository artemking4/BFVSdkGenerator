// Object: TwinkleToJsEventEntity
// ClassId: 8114
// RuntimeId: 9725
// TypeInfo: 0x0000000144F65390
#include "../Entity/Entity.h"

namespace Twinkle {
    class TwinkleToJsEventEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(TwinkleToJsEventEntity) == 0x30);
}