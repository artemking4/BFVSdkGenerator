// Object: ClientFakePhysicsAffectorEntity
// ClassId: 6701
// RuntimeId: 7754
// TypeInfo: 0x0000000144DDD500
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientFakePhysicsAffectorEntity : public Entity::Entity {
        char pad_0x20[0xD0];
    }; // 0xF0
    static_assert(sizeof(ClientFakePhysicsAffectorEntity) == 0xF0);
}