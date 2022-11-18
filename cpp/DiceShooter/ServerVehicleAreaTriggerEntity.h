// Object: ServerVehicleAreaTriggerEntity
// ClassId: 7778
// RuntimeId: 45417
// TypeInfo: 0x0000000144DD4CA0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerVehicleAreaTriggerEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ServerVehicleAreaTriggerEntity) == 0x68);
}