// Object: ClientTriggerExplosionEntity
// ClassId: 6907
// RuntimeId: 37365
// TypeInfo: 0x0000000144DD9310
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientTriggerExplosionEntity : public Entity::Entity {
        char pad_0x20[0xD8];
    }; // 0xF8
    static_assert(sizeof(ClientTriggerExplosionEntity) == 0xF8);
}