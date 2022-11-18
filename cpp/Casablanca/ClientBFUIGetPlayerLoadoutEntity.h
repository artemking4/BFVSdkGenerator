// Object: ClientBFUIGetPlayerLoadoutEntity
// ClassId: 6437
// RuntimeId: 42910
// TypeInfo: 0x0000000144CC55E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetPlayerLoadoutEntity : public Entity::Entity {
        char pad_0x20[0x88];
    }; // 0xA8
    static_assert(sizeof(ClientBFUIGetPlayerLoadoutEntity) == 0xA8);
}