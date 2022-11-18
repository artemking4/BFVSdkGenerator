// Object: FloatChangedEventEntity
// ClassId: 7170
// RuntimeId: 36297
// TypeInfo: 0x0000000144C96EA0
#include "../Entity/Entity.h"

namespace Casablanca {
    class FloatChangedEventEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(FloatChangedEventEntity) == 0x48);
}