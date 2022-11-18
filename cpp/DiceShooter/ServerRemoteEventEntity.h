// Object: ServerRemoteEventEntity
// ClassId: 7692
// RuntimeId: 39489
// TypeInfo: 0x0000000144DD50E0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerRemoteEventEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ServerRemoteEventEntity) == 0x40);
}