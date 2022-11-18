// Object: ServerFbProxyControllerEntity
// ClassId: 7550
// RuntimeId: 58064
// TypeInfo: 0x0000000144E5E490
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerFbProxyControllerEntity : public Entity::Entity {
        char pad_0x20[0xD50];
    }; // 0xD70
    static_assert(sizeof(ServerFbProxyControllerEntity) == 0xD70);
}