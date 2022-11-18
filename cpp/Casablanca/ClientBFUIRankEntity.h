// Object: ClientBFUIRankEntity
// ClassId: 6554
// RuntimeId: 30046
// TypeInfo: 0x0000000144CA6250
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIRankEntity : public Entity::Entity {
        char pad_0x20[0xB8];
    }; // 0xD8
    static_assert(sizeof(ClientBFUIRankEntity) == 0xD8);
}