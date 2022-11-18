// Object: ServerReconstructionBuildEntity
// ClassId: 7689
// RuntimeId: 27171
// TypeInfo: 0x0000000144C3E310
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerReconstructionBuildEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerReconstructionBuildEntity) == 0x30);
}