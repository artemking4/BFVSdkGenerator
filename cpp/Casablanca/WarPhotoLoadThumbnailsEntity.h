// Object: WarPhotoLoadThumbnailsEntity
// ClassId: 8267
// RuntimeId: 23689
// TypeInfo: 0x0000000144C5C550
#include "../Entity/Entity.h"

namespace Casablanca {
    class WarPhotoLoadThumbnailsEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(WarPhotoLoadThumbnailsEntity) == 0x30);
}