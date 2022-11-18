// Object: ServerSaveEntity
// ClassId: 7702
// RuntimeId: 35684
// TypeInfo: 0x0000000144E60B10
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerSaveEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ServerSaveEntity) == 0x50);
}