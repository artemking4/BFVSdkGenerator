// Object: ClientPlayerAbilityReferenceEntity
// ClassId: 6795
// RuntimeId: 9344
// TypeInfo: 0x0000000144DE19C0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientPlayerAbilityReferenceEntity : public Entity::Entity {
        char pad_0x20[0xC8];
    }; // 0xE8
    static_assert(sizeof(ClientPlayerAbilityReferenceEntity) == 0xE8);
}