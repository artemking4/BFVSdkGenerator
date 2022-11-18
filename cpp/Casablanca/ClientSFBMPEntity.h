// Object: ClientSFBMPEntity
// ClassId: 6846
// RuntimeId: 33244
// TypeInfo: 0x0000000144CD5600
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientSFBMPEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientSFBMPEntity) == 0x50);
}