// Object: ClientSupplySphereEntity
// ClassId: 7875
// RuntimeId: 8780
// TypeInfo: 0x0000000144C54550
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ClientSupplySphereEntity : public Entity::SpatialEntity {
        char pad_0x30[0x100];
    }; // 0x130
    static_assert(sizeof(ClientSupplySphereEntity) == 0x130);
}