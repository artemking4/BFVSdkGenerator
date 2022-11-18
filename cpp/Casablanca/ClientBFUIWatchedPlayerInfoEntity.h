// Object: ClientBFUIWatchedPlayerInfoEntity
// ClassId: 6606
// RuntimeId: 35799
// TypeInfo: 0x0000000144CBEAD0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIWatchedPlayerInfoEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUIWatchedPlayerInfoEntity) == 0x40);
}