// Object: ClientUIDakarInventoryEntity
// ClassId: 6931
// RuntimeId: 24678
// TypeInfo: 0x0000000144C9C2D0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIDakarInventoryEntity : public Entity::Entity {
        char pad_0x20[0x160];
    }; // 0x180
    static_assert(sizeof(ClientUIDakarInventoryEntity) == 0x180);
}