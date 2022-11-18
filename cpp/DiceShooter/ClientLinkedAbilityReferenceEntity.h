// Object: ClientLinkedAbilityReferenceEntity
// ClassId: 6739
// RuntimeId: 64639
// TypeInfo: 0x0000000144DE1BE0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientLinkedAbilityReferenceEntity : public Entity::Entity {
        char pad_0x20[0x70];
    }; // 0x90
    static_assert(sizeof(ClientLinkedAbilityReferenceEntity) == 0x90);
}