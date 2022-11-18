// Object: CablesConnectionPointsControl
// ClassId: 6284
// RuntimeId: 44311
// TypeInfo: 0x0000000144C1ADB0
#include "../Entity/Entity.h"

namespace Cables {
    class CablesConnectionPointsControl : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(CablesConnectionPointsControl) == 0x30);
}