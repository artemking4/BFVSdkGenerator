// Object: ClientBFUIGetDakarPlayerSpawnPointEntity
// ClassId: 6422
// RuntimeId: 49218
// TypeInfo: 0x0000000144CB04A0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetDakarPlayerSpawnPointEntity : public Entity::Entity {
        char pad_0x20[0x70];
    }; // 0x90
    static_assert(sizeof(ClientBFUIGetDakarPlayerSpawnPointEntity) == 0x90);
}