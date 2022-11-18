// Object: ServerCategoryToPlayerAbilityEntity
// ClassId: 7458
// RuntimeId: 17988
// TypeInfo: 0x0000000144DE0960
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerCategoryToPlayerAbilityEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ServerCategoryToPlayerAbilityEntity) == 0x70);
}