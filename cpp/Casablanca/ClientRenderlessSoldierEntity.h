// Object: ClientRenderlessSoldierEntity
// ClassId: 6843
// RuntimeId: 14523
// TypeInfo: 0x0000000144C56AA0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientRenderlessSoldierEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientRenderlessSoldierEntity) == 0x38);
}