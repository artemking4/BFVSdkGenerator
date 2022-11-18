// Object: ServerReadAntGameStateEntity
// ClassId: 7688
// RuntimeId: 19619
// TypeInfo: 0x0000000144E5ED80
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerReadAntGameStateEntity : public Entity::Entity {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(ServerReadAntGameStateEntity) == 0xB0);
}