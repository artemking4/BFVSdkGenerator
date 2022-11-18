// Object: ClientBFUIRankupEntity
// ClassId: 6556
// RuntimeId: 57692
// TypeInfo: 0x0000000144C86FD0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIRankupEntity : public Entity::Entity {
        char pad_0x20[0x80];
    }; // 0xA0
    static_assert(sizeof(ClientBFUIRankupEntity) == 0xA0);
}