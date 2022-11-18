// Object: ClientVehicleDefinitionComponent
// ClassId: 5770
// RuntimeId: 26416
// TypeInfo: 0x0000000144DAFF80
#include "../GameClient/BaseClientVehicleDefinitionComponent.h"

namespace DiceCommons {
    class ClientVehicleDefinitionComponent : public GameClient::BaseClientVehicleDefinitionComponent {
        char pad_0x38[0x3D8];
    }; // 0x410
    static_assert(sizeof(ClientVehicleDefinitionComponent) == 0x410);
}