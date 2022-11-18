// Object: ClientSectorRetreatEntity
// ClassId: 6849
// RuntimeId: 10259
// TypeInfo: 0x0000000144CD8000
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientSectorRetreatEntity : public Entity::Entity {
        char pad_0x20[0x170];
    }; // 0x190
    static_assert(sizeof(ClientSectorRetreatEntity) == 0x190);
}