// Object: ServerDealDamageEntity
// ClassId: 7502
// RuntimeId: 30226
// TypeInfo: 0x0000000144DD3180
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerDealDamageEntity : public Entity::Entity {
        char pad_0x20[0x160];
    }; // 0x180
    static_assert(sizeof(ServerDealDamageEntity) == 0x180);
}