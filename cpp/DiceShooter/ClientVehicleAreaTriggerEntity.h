// Object: ClientVehicleAreaTriggerEntity
// ClassId: 7030
// RuntimeId: 19543
// TypeInfo: 0x0000000144DDCB70
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientVehicleAreaTriggerEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ClientVehicleAreaTriggerEntity) == 0x68);
}