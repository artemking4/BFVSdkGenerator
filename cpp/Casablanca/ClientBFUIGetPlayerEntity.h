// Object: ClientBFUIGetPlayerEntity
// ClassId: 6434
// RuntimeId: 9788
// TypeInfo: 0x0000000144CBC540
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetPlayerEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientBFUIGetPlayerEntity) == 0x58);
}