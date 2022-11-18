// Object: ServerEncounterSpawnLocatorEntity
// ClassId: 8024
// RuntimeId: 60353
// TypeInfo: 0x0000000144C60610
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ServerEncounterSpawnLocatorEntity : public Entity::SpatialEntity {
        char pad_0x30[0x60];
    }; // 0x90
    static_assert(sizeof(ServerEncounterSpawnLocatorEntity) == 0x90);
}