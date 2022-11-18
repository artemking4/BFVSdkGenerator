// Object: ClientBFUIPlayerFieldSpecInfoEntity
// ClassId: 6522
// RuntimeId: 1003
// TypeInfo: 0x0000000144CBF680
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIPlayerFieldSpecInfoEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientBFUIPlayerFieldSpecInfoEntity) == 0x60);
}