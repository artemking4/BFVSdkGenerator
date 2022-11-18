// Object: ClientInputQueryEntity
// ClassId: 6730
// RuntimeId: 26214
// TypeInfo: 0x0000000144DDB210
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientInputQueryEntity : public Entity::Entity {
        char pad_0x20[0xE0];
    }; // 0x100
    static_assert(sizeof(ClientInputQueryEntity) == 0x100);
}