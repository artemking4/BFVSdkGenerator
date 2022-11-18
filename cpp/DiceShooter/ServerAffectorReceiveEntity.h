// Object: ServerAffectorReceiveEntity
// ClassId: 7431
// RuntimeId: 59465
// TypeInfo: 0x0000000144DCE7E0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerAffectorReceiveEntity : public Entity::Entity {
        char pad_0x20[0xC0];
    }; // 0xE0
    static_assert(sizeof(ServerAffectorReceiveEntity) == 0xE0);
}