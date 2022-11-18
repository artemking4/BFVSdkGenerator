// Object: ClientBFCoopLocalPlayerInfoEntity
// ClassId: 6335
// RuntimeId: 60944
// TypeInfo: 0x0000000144CD0290
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFCoopLocalPlayerInfoEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientBFCoopLocalPlayerInfoEntity) == 0x50);
}