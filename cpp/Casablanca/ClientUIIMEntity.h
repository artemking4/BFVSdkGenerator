// Object: ClientUIIMEntity
// ClassId: 6955
// RuntimeId: 4047
// TypeInfo: 0x0000000144CB2A60
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIIMEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientUIIMEntity) == 0x58);
}