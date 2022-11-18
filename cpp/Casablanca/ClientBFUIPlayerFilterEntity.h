// Object: ClientBFUIPlayerFilterEntity
// ClassId: 6523
// RuntimeId: 19038
// TypeInfo: 0x0000000144CBF570
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIPlayerFilterEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientBFUIPlayerFilterEntity) == 0x60);
}