// Object: ClientPlayerAbilityPropertyOutputEntity
// ClassId: 6794
// RuntimeId: 25098
// TypeInfo: 0x0000000144DE2100
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientPlayerAbilityPropertyOutputEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientPlayerAbilityPropertyOutputEntity) == 0x58);
}