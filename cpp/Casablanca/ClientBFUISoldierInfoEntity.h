// Object: ClientBFUISoldierInfoEntity
// ClassId: 6580
// RuntimeId: 50123
// TypeInfo: 0x0000000144CC1B60
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISoldierInfoEntity : public Entity::Entity {
        char pad_0x20[0x118];
    }; // 0x138
    static_assert(sizeof(ClientBFUISoldierInfoEntity) == 0x138);
}