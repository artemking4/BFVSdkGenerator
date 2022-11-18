// Object: ClientInputToNetworkedBoolEntity
// ClassId: 6731
// RuntimeId: 24663
// TypeInfo: 0x0000000144DDD2E0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientInputToNetworkedBoolEntity : public Entity::Entity {
        char pad_0x20[0xF8];
    }; // 0x118
    static_assert(sizeof(ClientInputToNetworkedBoolEntity) == 0x118);
}