// Object: WarPhotoScreenshotEntity
// ClassId: 8268
// RuntimeId: 51168
// TypeInfo: 0x0000000144C5C660
#include "../Entity/Entity.h"

namespace Casablanca {
    class WarPhotoScreenshotEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(WarPhotoScreenshotEntity) == 0x30);
}