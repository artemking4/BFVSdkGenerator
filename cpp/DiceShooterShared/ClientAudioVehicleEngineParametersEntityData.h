// Object: ClientAudioVehicleEngineParametersEntityData
// ClassId: 2474
// RuntimeId: 40159
// TypeInfo: 0x0000000144DF3270
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class ClientAudioVehicleEngineParametersEntityData : public Entity::EntityData {
        Boolean UseFirstPersonSounds; // 0x20
        Boolean Enabled; // 0x21
        char pad_0x22[0x6];
    }; // 0x28
    static_assert(sizeof(ClientAudioVehicleEngineParametersEntityData) == 0x28);
}
#pragma pack(pop)