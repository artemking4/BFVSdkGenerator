// Object: ServerOperationStateEntity
// ClassId: 7608
// RuntimeId: 62447
// TypeInfo: 0x0000000144CEBD20
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerOperationStateEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerOperationStateEntity) == 0x30);
}