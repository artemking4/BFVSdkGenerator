// Object: ClientCharacterStateRequestEntity
// ClassId: 6630
// RuntimeId: 12437
// TypeInfo: 0x0000000144DCE290
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientCharacterStateRequestEntity : public Entity::Entity {
        char pad_0x20[0xB0];
    }; // 0xD0
    static_assert(sizeof(ClientCharacterStateRequestEntity) == 0xD0);
}