// Object: ClientReconstructionEntity
// ClassId: 7868
// RuntimeId: 34731
// TypeInfo: 0x0000000144C54EE0
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ClientReconstructionEntity : public Entity::SpatialEntity {
        char pad_0x30[0x260];
    }; // 0x290
    static_assert(sizeof(ClientReconstructionEntity) == 0x290);
}