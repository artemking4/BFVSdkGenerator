// Object: ClientCustomizationVehicleEntity
// ClassId: 7855
// RuntimeId: 55412
// TypeInfo: 0x0000000144C900F0
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ClientCustomizationVehicleEntity : public Entity::SpatialEntity {
        char pad_0x30[0x540];
    }; // 0x570
    static_assert(sizeof(ClientCustomizationVehicleEntity) == 0x570);
}