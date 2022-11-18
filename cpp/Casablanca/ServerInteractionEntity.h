// Object: ServerInteractionEntity
// ClassId: 8025
// RuntimeId: 64729
// TypeInfo: 0x0000000144C3EB90
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ServerInteractionEntity : public Entity::SpatialEntity {
        char pad_0x30[0x310];
    }; // 0x340
    static_assert(sizeof(ServerInteractionEntity) == 0x340);
}