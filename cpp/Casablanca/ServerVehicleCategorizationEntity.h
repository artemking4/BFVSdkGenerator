// Object: ServerVehicleCategorizationEntity
// ClassId: 7779
// RuntimeId: 8452
// TypeInfo: 0x0000000144CEFE00
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerVehicleCategorizationEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ServerVehicleCategorizationEntity) == 0x48);
}