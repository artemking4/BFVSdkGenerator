// Object: FloatCurveEntity
// ClassId: 7171
// RuntimeId: 31041
// TypeInfo: 0x0000000144ECCCF0
#include "../Entity/Entity.h"

namespace Entity {
    class FloatCurveEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(FloatCurveEntity) == 0x40);
}