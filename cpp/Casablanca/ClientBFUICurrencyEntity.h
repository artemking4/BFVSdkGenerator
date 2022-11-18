// Object: ClientBFUICurrencyEntity
// ClassId: 6380
// RuntimeId: 55970
// TypeInfo: 0x0000000144CAB0D0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUICurrencyEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientBFUICurrencyEntity) == 0x50);
}