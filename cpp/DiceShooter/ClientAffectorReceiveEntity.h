// Object: ClientAffectorReceiveEntity
// ClassId: 6307
// RuntimeId: 50546
// TypeInfo: 0x0000000144DD6A40
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientAffectorReceiveEntity : public Entity::Entity {
        char pad_0x20[0xC0];
    }; // 0xE0
    static_assert(sizeof(ClientAffectorReceiveEntity) == 0xE0);
}