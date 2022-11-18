// Object: DakarInteractionManagerEntity
// ClassId: 7100
// RuntimeId: 4547
// TypeInfo: 0x0000000144C1EED0
#include "../Entity/Entity.h"

namespace Casablanca {
    class DakarInteractionManagerEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(DakarInteractionManagerEntity) == 0x38);
}