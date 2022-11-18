// Object: BlueprintWaterShapeEntity
// ClassId: 6276
// RuntimeId: 53439
// TypeInfo: 0x0000000144BDE0C0
#include "../Entity/Entity.h"

namespace Ambience {
    class BlueprintWaterShapeEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(BlueprintWaterShapeEntity) == 0x30);
}