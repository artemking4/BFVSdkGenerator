// Object: CableGroupEntity
// ClassId: 6283
// RuntimeId: 37157
// TypeInfo: 0x0000000144C1AEC0
#include "../Entity/Entity.h"

namespace Cables {
    class CableGroupEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(CableGroupEntity) == 0x30);
}