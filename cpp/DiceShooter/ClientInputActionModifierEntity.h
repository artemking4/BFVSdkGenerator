// Object: ClientInputActionModifierEntity
// ClassId: 6728
// RuntimeId: 8206
// TypeInfo: 0x0000000144DDD3F0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientInputActionModifierEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientInputActionModifierEntity) == 0x50);
}