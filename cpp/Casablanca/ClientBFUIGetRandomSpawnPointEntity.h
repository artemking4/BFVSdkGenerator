// Object: ClientBFUIGetRandomSpawnPointEntity
// ClassId: 6440
// RuntimeId: 14700
// TypeInfo: 0x0000000144CB0280
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetRandomSpawnPointEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientBFUIGetRandomSpawnPointEntity) == 0x50);
}