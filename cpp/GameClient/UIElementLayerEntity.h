// Object: UIElementLayerEntity
// ClassId: 8169
// RuntimeId: 24800
// TypeInfo: 0x0000000144E42700
#include "../Entity/Entity.h"

namespace GameClient {
    class UIElementLayerEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(UIElementLayerEntity) == 0x68);
}