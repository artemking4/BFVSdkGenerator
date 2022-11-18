// Object: ServerSpottingPlayerEntity
// ClassId: 7724
// RuntimeId: 54489
// TypeInfo: 0x0000000144CE0110
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerSpottingPlayerEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ServerSpottingPlayerEntity) == 0x40);
}