// Object: BlockSpottingEntity
// ClassId: 7842
// RuntimeId: 24899
// TypeInfo: 0x0000000144C8CFA0
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class BlockSpottingEntity : public Entity::SpatialEntity {
        char pad_0x30[0xA0];
    }; // 0xD0
    static_assert(sizeof(BlockSpottingEntity) == 0xD0);
}