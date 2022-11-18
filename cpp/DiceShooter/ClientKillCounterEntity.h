// Object: ClientKillCounterEntity
// ClassId: 6735
// RuntimeId: 14225
// TypeInfo: 0x0000000144DDD1D0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientKillCounterEntity : public Entity::Entity {
        char pad_0x20[0xB8];
    }; // 0xD8
    static_assert(sizeof(ClientKillCounterEntity) == 0xD8);
}