// Object: AbstractDynamicDestructionDepthEntity
// ClassId: 7836
// RuntimeId: 39328
// TypeInfo: 0x0000000144E4A6A0
#include "../Entity/SpatialEntity.h"

namespace GameCommon {
    class AbstractDynamicDestructionDepthEntity : public Entity::SpatialEntity {
        char pad_0x30[0x18];
    }; // 0x48
    static_assert(sizeof(AbstractDynamicDestructionDepthEntity) == 0x48);
}