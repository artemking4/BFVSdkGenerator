// Object: ClientAimTransformQueryEntity
// ClassId: 6313
// RuntimeId: 16426
// TypeInfo: 0x0000000144DDB650
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientAimTransformQueryEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ClientAimTransformQueryEntity) == 0x70);
}