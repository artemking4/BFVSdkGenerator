// Object: ServerPlayerAbilityReferenceEntity
// ClassId: 7661
// RuntimeId: 33038
// TypeInfo: 0x0000000144DE0630
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerPlayerAbilityReferenceEntity : public Entity::Entity {
        char pad_0x20[0xA8];
    }; // 0xC8
    static_assert(sizeof(ServerPlayerAbilityReferenceEntity) == 0xC8);
}