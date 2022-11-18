// Object: ClientUINavigationEntity
// ClassId: 6972
// RuntimeId: 33284
// TypeInfo: 0x0000000144CB5680
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUINavigationEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientUINavigationEntity) == 0x38);
}