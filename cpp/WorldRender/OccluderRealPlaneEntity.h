// Object: OccluderRealPlaneEntity
// ClassId: 7286
// RuntimeId: 5133
// TypeInfo: 0x0000000144EB75F0
#include "../Entity/Entity.h"

namespace WorldRender {
    class OccluderRealPlaneEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(OccluderRealPlaneEntity) == 0x80);
}