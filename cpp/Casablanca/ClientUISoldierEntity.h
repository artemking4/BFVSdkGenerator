// Object: ClientUISoldierEntity
// ClassId: 7003
// RuntimeId: 43431
// TypeInfo: 0x0000000144CB47A0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUISoldierEntity : public Entity::Entity {
        char pad_0x20[0x100];
    }; // 0x120
    static_assert(sizeof(ClientUISoldierEntity) == 0x120);
}