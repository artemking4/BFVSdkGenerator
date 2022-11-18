// Object: ServerAIEvadeVolumeEntity
// ClassId: 8007
// RuntimeId: 50153
// TypeInfo: 0x0000000144BFC590
#include "../Entity/SpatialEntity.h"

namespace BattleAI {
    class ServerAIEvadeVolumeEntity : public Entity::SpatialEntity {
        char pad_0x30[0x80];
    }; // 0xB0
    static_assert(sizeof(ServerAIEvadeVolumeEntity) == 0xB0);
}