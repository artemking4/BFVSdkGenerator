// Object: OccluderPlaneEntity
// ClassId: 7285
// RuntimeId: 44649
// TypeInfo: 0x0000000144EB7700
#include "../Entity/Entity.h"

namespace WorldRender {
    class OccluderPlaneEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(OccluderPlaneEntity) == 0x80);
}