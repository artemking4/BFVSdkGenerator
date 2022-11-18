// Object: ServerHumanPlayerProxyEntity
// ClassId: 7572
// RuntimeId: 33549
// TypeInfo: 0x0000000144E5CB60
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerHumanPlayerProxyEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerHumanPlayerProxyEntity) == 0x30);
}