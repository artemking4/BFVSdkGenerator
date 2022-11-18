// Object: ClientFlagMeshHolderEntity
// ClassId: 6707
// RuntimeId: 5781
// TypeInfo: 0x0000000144C9E340
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientFlagMeshHolderEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientFlagMeshHolderEntity) == 0x50);
}