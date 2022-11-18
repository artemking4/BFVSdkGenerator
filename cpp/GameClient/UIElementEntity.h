// Object: UIElementEntity
// ClassId: 8115
// RuntimeId: 61018
// TypeInfo: 0x0000000144E42920
#include "../Entity/Entity.h"

namespace GameClient {
    class UIElementEntity : public Entity::Entity {
        char pad_0x20[0x130];
    }; // 0x150
    static_assert(sizeof(UIElementEntity) == 0x150);
}