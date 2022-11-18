// Object: ServerNarrativeNodeEntity
// ClassId: 8031
// RuntimeId: 6536
// TypeInfo: 0x0000000144C62DF0
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ServerNarrativeNodeEntity : public Entity::SpatialEntity {
        char pad_0x30[0x150];
    }; // 0x180
    static_assert(sizeof(ServerNarrativeNodeEntity) == 0x180);
}