// Object: ServerReconstructionEntity
// ClassId: 8035
// RuntimeId: 59036
// TypeInfo: 0x0000000144C3E200
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ServerReconstructionEntity : public Entity::SpatialEntity {
        char pad_0x30[0x300];
    }; // 0x330
    static_assert(sizeof(ServerReconstructionEntity) == 0x330);
}