// Object: ClientBFUIDLSSOptionHelperEntity
// ClassId: 6381
// RuntimeId: 9138
// TypeInfo: 0x0000000144CB8180
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIDLSSOptionHelperEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ClientBFUIDLSSOptionHelperEntity) == 0x70);
}