// Object: ClientCategoryToPlayerAbilityEntity
// ClassId: 6627
// RuntimeId: 30868
// TypeInfo: 0x0000000144DE2320
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientCategoryToPlayerAbilityEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ClientCategoryToPlayerAbilityEntity) == 0x70);
}