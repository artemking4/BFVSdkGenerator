// Object: ServerSaveGameLoadedEntity
// ClassId: 7703
// RuntimeId: 53376
// TypeInfo: 0x0000000144E60A00
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerSaveGameLoadedEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ServerSaveGameLoadedEntity) == 0x58);
}