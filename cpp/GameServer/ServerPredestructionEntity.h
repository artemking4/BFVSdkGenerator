// Object: ServerPredestructionEntity
// ClassId: 7674
// RuntimeId: 23266
// TypeInfo: 0x0000000144E5D1C0
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerPredestructionEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ServerPredestructionEntity) == 0x58);
}