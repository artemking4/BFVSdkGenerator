// Object: ClientUIScreenRenderEntity
// ClassId: 6991
// RuntimeId: 3865
// TypeInfo: 0x0000000144E425F0
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientUIScreenRenderEntity : public Entity::Entity {
        char pad_0x20[0xF0];
    }; // 0x110
    static_assert(sizeof(ClientUIScreenRenderEntity) == 0x110);
}