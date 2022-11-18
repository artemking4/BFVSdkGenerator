// Object: ServerFlagScoreCounterEntity
// ClassId: 7553
// RuntimeId: 62293
// TypeInfo: 0x0000000144CE70E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerFlagScoreCounterEntity : public Entity::Entity {
        char pad_0x20[0x198];
    }; // 0x1B8
    static_assert(sizeof(ServerFlagScoreCounterEntity) == 0x1B8);
}