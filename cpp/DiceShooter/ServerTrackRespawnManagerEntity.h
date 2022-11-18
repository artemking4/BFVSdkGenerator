// Object: ServerTrackRespawnManagerEntity
// ClassId: 7757
// RuntimeId: 17648
// TypeInfo: 0x0000000144DD9640
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerTrackRespawnManagerEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ServerTrackRespawnManagerEntity) == 0x58);
}