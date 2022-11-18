// Object: ClientFogOfWarEntity
// ClassId: 6710
// RuntimeId: 24942
// TypeInfo: 0x0000000144CD60A0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientFogOfWarEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientFogOfWarEntity) == 0x58);
}