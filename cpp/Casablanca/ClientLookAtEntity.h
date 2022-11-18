// Object: ClientLookAtEntity
// ClassId: 7862
// RuntimeId: 41924
// TypeInfo: 0x0000000144C56CC0
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ClientLookAtEntity : public Entity::SpatialEntity {
        char pad_0x30[0x280];
    }; // 0x2B0
    static_assert(sizeof(ClientLookAtEntity) == 0x2B0);
}