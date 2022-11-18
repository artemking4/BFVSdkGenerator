// Object: ClientPlayerAbilityStateEntity
// ClassId: 6797
// RuntimeId: 45243
// TypeInfo: 0x0000000144DE1FF0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientPlayerAbilityStateEntity : public Entity::Entity {
        char pad_0x20[0xB8];
    }; // 0xD8
    static_assert(sizeof(ClientPlayerAbilityStateEntity) == 0xD8);
}