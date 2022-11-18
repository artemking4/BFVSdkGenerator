// Object: ServerInputQueryEntity
// ClassId: 7576
// RuntimeId: 64514
// TypeInfo: 0x0000000144DD2F60
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerInputQueryEntity : public Entity::Entity {
        char pad_0x20[0xE0];
    }; // 0x100
    static_assert(sizeof(ServerInputQueryEntity) == 0x100);
}