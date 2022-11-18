// Object: BFServerCheckpointEntity
// ClassId: 7840
// RuntimeId: 34644
// TypeInfo: 0x0000000144C61BE0
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class BFServerCheckpointEntity : public Entity::SpatialEntity {
        char pad_0x30[0xD8];
    }; // 0x108
    static_assert(sizeof(BFServerCheckpointEntity) == 0x108);
}