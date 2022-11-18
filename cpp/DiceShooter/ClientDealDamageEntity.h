// Object: ClientDealDamageEntity
// ClassId: 6667
// RuntimeId: 21878
// TypeInfo: 0x0000000144DDB430
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientDealDamageEntity : public Entity::Entity {
        char pad_0x20[0x160];
    }; // 0x180
    static_assert(sizeof(ClientDealDamageEntity) == 0x180);
}