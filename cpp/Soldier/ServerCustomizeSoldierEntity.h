// Object: ServerCustomizeSoldierEntity
// ClassId: 7479
// RuntimeId: 53930
// TypeInfo: 0x0000000144F30960
#include "../Entity/Entity.h"

namespace Soldier {
    class ServerCustomizeSoldierEntity : public Entity::Entity {
        char pad_0x20[0xA38];
    }; // 0xA58
    static_assert(sizeof(ServerCustomizeSoldierEntity) == 0xA58);
}