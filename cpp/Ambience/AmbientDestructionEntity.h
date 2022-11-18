// Object: AmbientDestructionEntity
// ClassId: 6181
// RuntimeId: 37429
// TypeInfo: 0x0000000144BDDD90
#include "../Entity/Entity.h"

namespace Ambience {
    class AmbientDestructionEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(AmbientDestructionEntity) == 0x40);
}