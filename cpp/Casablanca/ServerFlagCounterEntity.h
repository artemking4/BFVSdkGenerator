// Object: ServerFlagCounterEntity
// ClassId: 7552
// RuntimeId: 36797
// TypeInfo: 0x0000000144CE71F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerFlagCounterEntity : public Entity::Entity {
        char pad_0x20[0x80];
    }; // 0xA0
    static_assert(sizeof(ServerFlagCounterEntity) == 0xA0);
}