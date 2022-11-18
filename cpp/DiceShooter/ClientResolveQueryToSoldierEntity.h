// Object: ClientResolveQueryToSoldierEntity
// ClassId: 6844
// RuntimeId: 27786
// TypeInfo: 0x0000000144DDA880
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientResolveQueryToSoldierEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientResolveQueryToSoldierEntity) == 0x38);
}