// Object: ClientBFUIGetCapturePointSpawnPointEntity
// ClassId: 6420
// RuntimeId: 10306
// TypeInfo: 0x0000000144CB05B0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetCapturePointSpawnPointEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientBFUIGetCapturePointSpawnPointEntity) == 0x50);
}