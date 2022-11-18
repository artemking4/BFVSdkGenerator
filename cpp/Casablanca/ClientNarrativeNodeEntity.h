// Object: ClientNarrativeNodeEntity
// ClassId: 7866
// RuntimeId: 1174
// TypeInfo: 0x0000000144C49C00
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ClientNarrativeNodeEntity : public Entity::SpatialEntity {
        char pad_0x30[0x110];
    }; // 0x140
    static_assert(sizeof(ClientNarrativeNodeEntity) == 0x140);
}