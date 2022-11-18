// Object: ClientBFUIPlayerInfoEntity
// ClassId: 6524
// RuntimeId: 13576
// TypeInfo: 0x0000000144CBF460
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIPlayerInfoEntity : public Entity::Entity {
        char pad_0x20[0x140];
    }; // 0x160
    static_assert(sizeof(ClientBFUIPlayerInfoEntity) == 0x160);
}