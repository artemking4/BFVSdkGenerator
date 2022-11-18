// Object: ServerPersistenceCapturePointHandlerEntity
// ClassId: 7612
// RuntimeId: 20131
// TypeInfo: 0x0000000144CE4F00
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistenceCapturePointHandlerEntity : public Entity::Entity {
        char pad_0x20[0xA8];
    }; // 0xC8
    static_assert(sizeof(ServerPersistenceCapturePointHandlerEntity) == 0xC8);
}