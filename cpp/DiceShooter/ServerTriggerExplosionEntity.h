// Object: ServerTriggerExplosionEntity
// ClassId: 7776
// RuntimeId: 54245
// TypeInfo: 0x0000000144DD90F0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerTriggerExplosionEntity : public Entity::Entity {
        char pad_0x20[0x120];
    }; // 0x140
    static_assert(sizeof(ServerTriggerExplosionEntity) == 0x140);
}