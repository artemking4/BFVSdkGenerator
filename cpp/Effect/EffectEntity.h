// Object: EffectEntity
// ClassId: 7985
// RuntimeId: 59349
// TypeInfo: 0x0000000144E22B00
#include "../Entity/SpatialEntity.h"

namespace Effect {
    class EffectEntity : public Entity::SpatialEntity {
        char pad_0x30[0x88];
    }; // 0xB8
    static_assert(sizeof(EffectEntity) == 0xB8);
}