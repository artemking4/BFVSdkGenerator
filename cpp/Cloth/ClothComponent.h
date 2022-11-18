// Object: ClothComponent
// ClassId: 5750
// RuntimeId: 3778
// TypeInfo: 0x0000000144E21AD0
#include "../Entity/Component.h"

namespace Cloth {
    class ClothComponent : public Entity::Component {
        char pad_0x20[0x70];
    }; // 0x90
    static_assert(sizeof(ClothComponent) == 0x90);
}