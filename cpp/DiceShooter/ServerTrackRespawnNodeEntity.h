// Object: ServerTrackRespawnNodeEntity
// ClassId: 8046
// RuntimeId: 25190
// TypeInfo: 0x0000000144DD8ED0
#include "../Entity/SpatialEntity.h"

namespace DiceShooter {
    class ServerTrackRespawnNodeEntity : public Entity::SpatialEntity {
        char pad_0x30[0x50];
    }; // 0x80
    static_assert(sizeof(ServerTrackRespawnNodeEntity) == 0x80);
}