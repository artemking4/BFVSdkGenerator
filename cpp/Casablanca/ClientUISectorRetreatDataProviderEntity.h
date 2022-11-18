// Object: ClientUISectorRetreatDataProviderEntity
// ClassId: 6996
// RuntimeId: 1062
// TypeInfo: 0x0000000144CB4AD0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUISectorRetreatDataProviderEntity : public Entity::Entity {
        char pad_0x20[0xF0];
    }; // 0x110
    static_assert(sizeof(ClientUISectorRetreatDataProviderEntity) == 0x110);
}