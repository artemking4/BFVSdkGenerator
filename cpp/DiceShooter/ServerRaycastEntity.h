// Object: ServerRaycastEntity
// ClassId: 7685
// RuntimeId: 3271
// TypeInfo: 0x0000000144DD2A10
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerRaycastEntity : public Entity::Entity {
        char pad_0x20[0x150];
    }; // 0x170
    static_assert(sizeof(ServerRaycastEntity) == 0x170);
}