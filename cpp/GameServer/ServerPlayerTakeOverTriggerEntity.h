// Object: ServerPlayerTakeOverTriggerEntity
// ClassId: 8034
// RuntimeId: 27961
// TypeInfo: 0x0000000144E63830
#include "../Entity/SpatialEntity.h"

namespace GameServer {
    class ServerPlayerTakeOverTriggerEntity : public Entity::SpatialEntity {
        char pad_0x30[0x38];
    }; // 0x68
    static_assert(sizeof(ServerPlayerTakeOverTriggerEntity) == 0x68);
}