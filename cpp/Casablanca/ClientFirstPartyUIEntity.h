// Object: ClientFirstPartyUIEntity
// ClassId: 6705
// RuntimeId: 9833
// TypeInfo: 0x0000000144C9CC60
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientFirstPartyUIEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientFirstPartyUIEntity) == 0x38);
}