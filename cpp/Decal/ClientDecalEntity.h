// Object: ClientDecalEntity
// ClassId: 7857
// RuntimeId: 16158
// TypeInfo: 0x0000000144DA52D0
#include "../Entity/SpatialEntity.h"

namespace Decal {
    class ClientDecalEntity : public Entity::SpatialEntity {
        char pad_0x30[0x40];
    }; // 0x70
    static_assert(sizeof(ClientDecalEntity) == 0x70);
}