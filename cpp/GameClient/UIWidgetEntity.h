// Object: UIWidgetEntity
// ClassId: 8178
// RuntimeId: 23271
// TypeInfo: 0x0000000144E42460
#include "../Entity/Entity.h"

namespace GameClient {
    class UIWidgetEntity : public Entity::Entity {
        char pad_0x20[0x110];
    }; // 0x130
    static_assert(sizeof(UIWidgetEntity) == 0x130);
}