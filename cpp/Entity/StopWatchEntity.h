// Object: StopWatchEntity
// ClassId: 8074
// RuntimeId: 17153
// TypeInfo: 0x0000000144ECDBD0
#include "../Entity/Entity.h"

namespace Entity {
    class StopWatchEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(StopWatchEntity) == 0x80);
}