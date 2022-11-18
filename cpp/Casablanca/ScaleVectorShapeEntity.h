// Object: ScaleVectorShapeEntity
// ClassId: 7368
// RuntimeId: 49052
// TypeInfo: 0x0000000144C96C80
#include "../Entity/Entity.h"

namespace Casablanca {
    class ScaleVectorShapeEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ScaleVectorShapeEntity) == 0x30);
}