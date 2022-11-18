// Object: ClientTurretTargetingEntity
// ClassId: 6909
// RuntimeId: 15867
// TypeInfo: 0x0000000144DDCC80
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientTurretTargetingEntity : public Entity::Entity {
        char pad_0x20[0x210];
    }; // 0x230
    static_assert(sizeof(ClientTurretTargetingEntity) == 0x230);
}