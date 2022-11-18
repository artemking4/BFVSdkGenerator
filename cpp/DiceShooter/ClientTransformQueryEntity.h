// Object: ClientTransformQueryEntity
// ClassId: 6906
// RuntimeId: 64735
// TypeInfo: 0x0000000144DCCBC0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientTransformQueryEntity : public Entity::Entity {
        char pad_0x20[0xF8];
    }; // 0x118
    static_assert(sizeof(ClientTransformQueryEntity) == 0x118);
}