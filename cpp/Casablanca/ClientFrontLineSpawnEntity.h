// Object: ClientFrontLineSpawnEntity
// ClassId: 6716
// RuntimeId: 15028
// TypeInfo: 0x0000000144CD1BC0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientFrontLineSpawnEntity : public Entity::Entity {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(ClientFrontLineSpawnEntity) == 0xC0);
}