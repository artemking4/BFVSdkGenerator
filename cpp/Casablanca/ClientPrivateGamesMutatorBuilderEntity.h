// Object: ClientPrivateGamesMutatorBuilderEntity
// ClassId: 6819
// RuntimeId: 28111
// TypeInfo: 0x0000000144C94E90
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPrivateGamesMutatorBuilderEntity : public Entity::Entity {
        char pad_0x20[0xB0];
    }; // 0xD0
    static_assert(sizeof(ClientPrivateGamesMutatorBuilderEntity) == 0xD0);
}