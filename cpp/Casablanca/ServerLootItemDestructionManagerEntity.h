// Object: ServerLootItemDestructionManagerEntity
// ClassId: 7597
// RuntimeId: 50704
// TypeInfo: 0x0000000144C5EBE0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerLootItemDestructionManagerEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ServerLootItemDestructionManagerEntity) == 0x58);
}