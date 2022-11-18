// Object: DistantShadowCacheVolumeEntity
// ClassId: 7125
// RuntimeId: 8282
// TypeInfo: 0x0000000144EBA580
#include "../Entity/Entity.h"

namespace WorldRender {
    class DistantShadowCacheVolumeEntity : public Entity::Entity {
        char pad_0x20[0x130];
    }; // 0x150
    static_assert(sizeof(DistantShadowCacheVolumeEntity) == 0x150);
}