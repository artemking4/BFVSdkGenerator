// Object: ClientBFUISpecialSpawnPointInfoEntity
// ClassId: 6587
// RuntimeId: 6619
// TypeInfo: 0x0000000144CAFD30
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISpecialSpawnPointInfoEntity : public Entity::Entity {
        char pad_0x20[0x98];
    }; // 0xB8
    static_assert(sizeof(ClientBFUISpecialSpawnPointInfoEntity) == 0xB8);
}