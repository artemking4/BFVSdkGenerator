// Object: ServerFootprintSystemEntity
// ClassId: 7559
// RuntimeId: 35991
// TypeInfo: 0x0000000144C40360
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerFootprintSystemEntity : public Entity::Entity {
        char pad_0x20[0xA8];
    }; // 0xC8
    static_assert(sizeof(ServerFootprintSystemEntity) == 0xC8);
}