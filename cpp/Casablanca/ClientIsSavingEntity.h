// Object: ClientIsSavingEntity
// ClassId: 6733
// RuntimeId: 28843
// TypeInfo: 0x0000000144CD1560
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientIsSavingEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientIsSavingEntity) == 0x30);
}