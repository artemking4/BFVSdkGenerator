// Object: ClientUIVehicleResupplyEntity
// ClassId: 7879
// RuntimeId: 16187
// TypeInfo: 0x0000000144CA0E50
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ClientUIVehicleResupplyEntity : public Entity::SpatialEntity {
        char pad_0x30[0x80];
    }; // 0xB0
    static_assert(sizeof(ClientUIVehicleResupplyEntity) == 0xB0);
}