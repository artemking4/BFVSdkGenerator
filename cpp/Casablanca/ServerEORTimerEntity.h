// Object: ServerEORTimerEntity
// ClassId: 7533
// RuntimeId: 34095
// TypeInfo: 0x0000000144CE7410
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerEORTimerEntity : public Entity::Entity {
        char pad_0x20[0xF8];
    }; // 0x118
    static_assert(sizeof(ServerEORTimerEntity) == 0x118);
}