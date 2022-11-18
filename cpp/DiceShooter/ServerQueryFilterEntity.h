// Object: ServerQueryFilterEntity
// ClassId: 7680
// RuntimeId: 35097
// TypeInfo: 0x0000000144DD2C30
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerQueryFilterEntity : public Entity::Entity {
        char pad_0x20[0x108];
    }; // 0x128
    static_assert(sizeof(ServerQueryFilterEntity) == 0x128);
}