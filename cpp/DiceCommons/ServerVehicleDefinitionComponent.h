// Object: ServerVehicleDefinitionComponent
// ClassId: 5926
// RuntimeId: 30297
// TypeInfo: 0x0000000144DAFE80
#include "../GameServer/BaseServerVehicleDefinitionComponent.h"

namespace DiceCommons {
    class ServerVehicleDefinitionComponent : public GameServer::BaseServerVehicleDefinitionComponent {
        char pad_0x38[0x5A0];
    }; // 0x5D8
    static_assert(sizeof(ServerVehicleDefinitionComponent) == 0x5D8);
}