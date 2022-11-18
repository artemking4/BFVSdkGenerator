// Object: FloatRangeConverterEntity
// ClassId: 7178
// RuntimeId: 37121
// TypeInfo: 0x0000000144C8C0C0
#include "../Entity/Entity.h"

namespace Casablanca {
    class FloatRangeConverterEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(FloatRangeConverterEntity) == 0x50);
}