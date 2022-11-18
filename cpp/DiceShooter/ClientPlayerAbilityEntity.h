// Object: ClientPlayerAbilityEntity
// ClassId: 6793
// RuntimeId: 9567
// TypeInfo: 0x0000000144DE1AD0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientPlayerAbilityEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ClientPlayerAbilityEntity) == 0x48);
}