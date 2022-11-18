// Object: ServerSpottingEntity
// ClassId: 7723
// RuntimeId: 23000
// TypeInfo: 0x0000000144CEAD30
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerSpottingEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(ServerSpottingEntity) == 0x80);
}