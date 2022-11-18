// Object: ClientCoverPeekEntity
// ClassId: 6647
// RuntimeId: 64091
// TypeInfo: 0x0000000144F36B80
#include "../Entity/Entity.h"

namespace Soldier {
    class ClientCoverPeekEntity : public Entity::Entity {
        char pad_0x20[0x2E0];
    }; // 0x300
    static_assert(sizeof(ClientCoverPeekEntity) == 0x300);
}