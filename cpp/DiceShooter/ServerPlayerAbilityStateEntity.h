// Object: ServerPlayerAbilityStateEntity
// ClassId: 7663
// RuntimeId: 41717
// TypeInfo: 0x0000000144DE0520
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerPlayerAbilityStateEntity : public Entity::Entity {
        char pad_0x20[0xB8];
    }; // 0xD8
    static_assert(sizeof(ServerPlayerAbilityStateEntity) == 0xD8);
}