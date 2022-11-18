// Object: FloatEaseFunctionEntity
// ClassId: 7172
// RuntimeId: 21185
// TypeInfo: 0x0000000144CCE5D0
#include "../Entity/Entity.h"

namespace Casablanca {
    class FloatEaseFunctionEntity : public Entity::Entity {
        char pad_0x20[0x88];
    }; // 0xA8
    static_assert(sizeof(FloatEaseFunctionEntity) == 0xA8);
}