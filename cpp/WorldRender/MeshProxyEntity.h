// Object: MeshProxyEntity
// ClassId: 7998
// RuntimeId: 59026
// TypeInfo: 0x0000000144EB7920
#include "../Entity/SpatialEntity.h"

namespace WorldRender {
    class MeshProxyEntity : public Entity::SpatialEntity {
        char pad_0x30[0xE0];
    }; // 0x110
    static_assert(sizeof(MeshProxyEntity) == 0x110);
}