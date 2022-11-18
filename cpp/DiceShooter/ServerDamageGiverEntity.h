// Object: ServerDamageGiverEntity
// ClassId: 7496
// RuntimeId: 4387
// TypeInfo: 0x0000000144DD3290
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerDamageGiverEntity : public Entity::Entity {
        char pad_0x20[0x88];
    }; // 0xA8
    static_assert(sizeof(ServerDamageGiverEntity) == 0xA8);
}