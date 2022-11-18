// Object: ServerSpeedEventGateEntity
// ClassId: 7721
// RuntimeId: 33810
// TypeInfo: 0x0000000144E608F0
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerSpeedEventGateEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ServerSpeedEventGateEntity) == 0x38);
}