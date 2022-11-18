// Object: ClientBFUIFilterEntityBase
// ClassId: 6395
// RuntimeId: 37180
// TypeInfo: 0x0000000144CAA520
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIFilterEntityBase : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientBFUIFilterEntityBase) == 0x38);
}