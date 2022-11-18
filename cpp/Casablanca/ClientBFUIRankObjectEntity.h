// Object: ClientBFUIRankObjectEntity
// ClassId: 6555
// RuntimeId: 60888
// TypeInfo: 0x0000000144CA6140
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIRankObjectEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUIRankObjectEntity) == 0x40);
}