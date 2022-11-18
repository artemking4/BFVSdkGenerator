// Object: ClientOverrideJointEntity
// ClassId: 6769
// RuntimeId: 61623
// TypeInfo: 0x0000000144DDB100
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientOverrideJointEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientOverrideJointEntity) == 0x50);
}