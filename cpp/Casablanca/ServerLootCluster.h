// Object: ServerLootCluster
// ClassId: 8026
// RuntimeId: 8717
// TypeInfo: 0x0000000144C397E0
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ServerLootCluster : public Entity::SpatialEntity {
        char pad_0x30[0x38];
    }; // 0x68
    static_assert(sizeof(ServerLootCluster) == 0x68);
}