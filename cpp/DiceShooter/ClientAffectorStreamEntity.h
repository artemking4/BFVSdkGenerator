// Object: ClientAffectorStreamEntity
// ClassId: 6308
// RuntimeId: 13078
// TypeInfo: 0x0000000144DD6420
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientAffectorStreamEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(ClientAffectorStreamEntity) == 0x78);
}