// Object: ServerVisibleAreaEntity
// ClassId: 7786
// RuntimeId: 42325
// TypeInfo: 0x0000000144ECCAD0
#include "../Entity/Entity.h"

namespace Entity {
    class ServerVisibleAreaEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerVisibleAreaEntity) == 0x30);
}