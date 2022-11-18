// Object: ClientPropertyToInputEntity
// ClassId: 6826
// RuntimeId: 12822
// TypeInfo: 0x0000000144DD7910
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientPropertyToInputEntity : public Entity::Entity {
        char pad_0x20[0x1C0];
    }; // 0x1E0
    static_assert(sizeof(ClientPropertyToInputEntity) == 0x1E0);
}