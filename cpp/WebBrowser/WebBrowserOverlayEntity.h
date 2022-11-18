// Object: WebBrowserOverlayEntity
// ClassId: 8276
// RuntimeId: 42660
// TypeInfo: 0x0000000144F7B6D0
#include "../Entity/Entity.h"

namespace WebBrowser {
    class WebBrowserOverlayEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(WebBrowserOverlayEntity) == 0x38);
}