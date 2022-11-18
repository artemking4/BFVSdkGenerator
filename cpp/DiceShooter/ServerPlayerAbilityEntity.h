// Object: ServerPlayerAbilityEntity
// ClassId: 7659
// RuntimeId: 22200
// TypeInfo: 0x0000000144DE01F0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerPlayerAbilityEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ServerPlayerAbilityEntity) == 0x68);
}