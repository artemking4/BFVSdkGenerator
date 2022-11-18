// Object: ClientBFUIGetPlayerSpawnPointEntity
// ClassId: 6438
// RuntimeId: 23813
// TypeInfo: 0x0000000144CB0390
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetPlayerSpawnPointEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientBFUIGetPlayerSpawnPointEntity) == 0x50);
}