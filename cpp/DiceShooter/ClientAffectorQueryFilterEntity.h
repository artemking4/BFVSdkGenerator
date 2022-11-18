// Object: ClientAffectorQueryFilterEntity
// ClassId: 6306
// RuntimeId: 53444
// TypeInfo: 0x0000000144DD6B50
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientAffectorQueryFilterEntity : public Entity::Entity {
        char pad_0x20[0x188];
    }; // 0x1A8
    static_assert(sizeof(ClientAffectorQueryFilterEntity) == 0x1A8);
}