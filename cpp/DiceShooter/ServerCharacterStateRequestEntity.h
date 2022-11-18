// Object: ServerCharacterStateRequestEntity
// ClassId: 7461
// RuntimeId: 43394
// TypeInfo: 0x0000000144DCE070
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerCharacterStateRequestEntity : public Entity::Entity {
        char pad_0x20[0xB0];
    }; // 0xD0
    static_assert(sizeof(ServerCharacterStateRequestEntity) == 0xD0);
}