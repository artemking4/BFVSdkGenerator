// Object: ClientConnectionInfoEntity
// ClassId: 6643
// RuntimeId: 33998
// TypeInfo: 0x0000000144C90310
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientConnectionInfoEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientConnectionInfoEntity) == 0x58);
}