// Object: ServerPlayerAbilityPropertyOutputEntity
// ClassId: 7660
// RuntimeId: 36319
// TypeInfo: 0x0000000144DE0740
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerPlayerAbilityPropertyOutputEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ServerPlayerAbilityPropertyOutputEntity) == 0x58);
}