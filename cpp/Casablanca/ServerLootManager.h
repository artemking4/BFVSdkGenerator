// Object: ServerLootManager
// ClassId: 7599
// RuntimeId: 13718
// TypeInfo: 0x0000000144C5E9C0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerLootManager : public Entity::Entity {
        char pad_0x20[0xD0];
    }; // 0xF0
    static_assert(sizeof(ServerLootManager) == 0xF0);
}