// Object: ClientBFUIGetFactionsEntity
// ClassId: 6424
// RuntimeId: 28317
// TypeInfo: 0x0000000144CC5E60
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetFactionsEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientBFUIGetFactionsEntity) == 0x60);
}