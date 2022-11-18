// Object: ServerResolveQueryToSoldierEntity
// ClassId: 7698
// RuntimeId: 54040
// TypeInfo: 0x0000000144DD26E0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerResolveQueryToSoldierEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ServerResolveQueryToSoldierEntity) == 0x38);
}