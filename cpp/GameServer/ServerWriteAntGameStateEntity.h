// Object: ServerWriteAntGameStateEntity
// ClassId: 7798
// RuntimeId: 38929
// TypeInfo: 0x0000000144E5EC70
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerWriteAntGameStateEntity : public Entity::Entity {
        char pad_0x20[0xA8];
    }; // 0xC8
    static_assert(sizeof(ServerWriteAntGameStateEntity) == 0xC8);
}