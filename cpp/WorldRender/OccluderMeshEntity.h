// Object: OccluderMeshEntity
// ClassId: 7284
// RuntimeId: 54159
// TypeInfo: 0x0000000144EB7810
#include "../Entity/Entity.h"

namespace WorldRender {
    class OccluderMeshEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(OccluderMeshEntity) == 0x38);
}