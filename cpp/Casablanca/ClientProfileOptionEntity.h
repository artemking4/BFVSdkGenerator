// Object: ClientProfileOptionEntity
// ClassId: 6823
// RuntimeId: 17603
// TypeInfo: 0x0000000144CD8110
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientProfileOptionEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientProfileOptionEntity) == 0x40);
}