// Object: DynamicQueryResultHubEntity
// ClassId: 7134
// RuntimeId: 53989
// TypeInfo: 0x0000000144DCCAB0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class DynamicQueryResultHubEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(DynamicQueryResultHubEntity) == 0x50);
}