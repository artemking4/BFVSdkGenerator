// Object: ClientBFUISpawnPointInfoEntity
// ClassId: 6586
// RuntimeId: 27823
// TypeInfo: 0x0000000144CAFE40
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISpawnPointInfoEntity : public Entity::Entity {
        char pad_0x20[0x78];
    }; // 0x98
    static_assert(sizeof(ClientBFUISpawnPointInfoEntity) == 0x98);
}