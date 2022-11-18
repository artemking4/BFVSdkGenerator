// Object: ServerLinkedAbilityReferenceEntity
// ClassId: 7593
// RuntimeId: 62603
// TypeInfo: 0x0000000144DE0300
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerLinkedAbilityReferenceEntity : public Entity::Entity {
        char pad_0x20[0x70];
    }; // 0x90
    static_assert(sizeof(ServerLinkedAbilityReferenceEntity) == 0x90);
}