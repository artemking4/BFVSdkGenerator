// Object: ClientDamageGiverEntity
// ClassId: 6664
// RuntimeId: 9578
// TypeInfo: 0x0000000144DDB540
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientDamageGiverEntity : public Entity::Entity {
        char pad_0x20[0xC8];
    }; // 0xE8
    static_assert(sizeof(ClientDamageGiverEntity) == 0xE8);
}