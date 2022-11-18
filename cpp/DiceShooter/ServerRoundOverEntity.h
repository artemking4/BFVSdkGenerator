// Object: ServerRoundOverEntity
// ClassId: 7701
// RuntimeId: 18444
// TypeInfo: 0x0000000144DD4FD0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerRoundOverEntity : public Entity::Entity {
        char pad_0x20[0xE8];
    }; // 0x108
    static_assert(sizeof(ServerRoundOverEntity) == 0x108);
}