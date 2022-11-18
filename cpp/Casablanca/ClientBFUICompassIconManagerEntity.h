// Object: ClientBFUICompassIconManagerEntity
// ClassId: 6375
// RuntimeId: 8526
// TypeInfo: 0x0000000144C59480
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUICompassIconManagerEntity : public Entity::Entity {
        char pad_0x20[0xF0];
    }; // 0x110
    static_assert(sizeof(ClientBFUICompassIconManagerEntity) == 0x110);
}