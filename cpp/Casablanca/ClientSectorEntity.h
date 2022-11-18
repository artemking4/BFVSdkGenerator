// Object: ClientSectorEntity
// ClassId: 6848
// RuntimeId: 63923
// TypeInfo: 0x0000000144CD7120
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientSectorEntity : public Entity::Entity {
        char pad_0x20[0x98];
    }; // 0xB8
    static_assert(sizeof(ClientSectorEntity) == 0xB8);
}