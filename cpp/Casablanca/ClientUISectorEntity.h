// Object: ClientUISectorEntity
// ClassId: 6995
// RuntimeId: 50734
// TypeInfo: 0x0000000144CB4BE0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUISectorEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ClientUISectorEntity) == 0x68);
}