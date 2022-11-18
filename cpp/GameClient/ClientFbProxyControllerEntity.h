// Object: ClientFbProxyControllerEntity
// ClassId: 6702
// RuntimeId: 25642
// TypeInfo: 0x0000000144E3F280
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientFbProxyControllerEntity : public Entity::Entity {
        char pad_0x20[0xD90];
    }; // 0xDB0
    static_assert(sizeof(ClientFbProxyControllerEntity) == 0xDB0);
}