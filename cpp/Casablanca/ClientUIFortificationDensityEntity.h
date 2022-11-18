// Object: ClientUIFortificationDensityEntity
// ClassId: 7877
// RuntimeId: 55250
// TypeInfo: 0x0000000144C4C270
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ClientUIFortificationDensityEntity : public Entity::SpatialEntity {
        char pad_0x30[0x50];
    }; // 0x80
    static_assert(sizeof(ClientUIFortificationDensityEntity) == 0x80);
}