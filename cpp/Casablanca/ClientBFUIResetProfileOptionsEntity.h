// Object: ClientBFUIResetProfileOptionsEntity
// ClassId: 6558
// RuntimeId: 25070
// TypeInfo: 0x0000000144CBC760
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIResetProfileOptionsEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientBFUIResetProfileOptionsEntity) == 0x30);
}