// Object: ClientUIServerInstanceTextEntity
// ClassId: 6997
// RuntimeId: 19288
// TypeInfo: 0x0000000144CCA0B0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIServerInstanceTextEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientUIServerInstanceTextEntity) == 0x40);
}