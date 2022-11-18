// Object: ServerPhantomEntity
// ClassId: 7651
// RuntimeId: 969
// TypeInfo: 0x0000000144DD2190
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerPhantomEntity : public Entity::Entity {
        char pad_0x20[0xF60];
    }; // 0xF80
    static_assert(sizeof(ServerPhantomEntity) == 0xF80);
}