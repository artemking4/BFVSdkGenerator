// Object: ClientBFUIControllerDisconnectedEntity
// ClassId: 6376
// RuntimeId: 25700
// TypeInfo: 0x0000000144C99C90
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIControllerDisconnectedEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientBFUIControllerDisconnectedEntity) == 0x38);
}