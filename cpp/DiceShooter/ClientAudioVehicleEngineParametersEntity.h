// Object: ClientAudioVehicleEngineParametersEntity
// ClassId: 6332
// RuntimeId: 36239
// TypeInfo: 0x0000000144DD0E40
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientAudioVehicleEngineParametersEntity : public Entity::Entity {
        char pad_0x20[0x190];
    }; // 0x1B0
    static_assert(sizeof(ClientAudioVehicleEngineParametersEntity) == 0x1B0);
}