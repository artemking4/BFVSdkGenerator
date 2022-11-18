// Object: OccluderVolumeEntity
// ClassId: 7287
// RuntimeId: 15297
// TypeInfo: 0x0000000144EB74E0
#include "../Entity/Entity.h"

namespace WorldRender {
    class OccluderVolumeEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(OccluderVolumeEntity) == 0x80);
}