// Object: ServerEntityCorrectionInterfaceComponent
// ClassId: 5988
// RuntimeId: 31721
// TypeInfo: 0x0000000144DCB8E0
#include "../GameServer/ServerGameComponent.h"

namespace DiceShooter {
    class ServerEntityCorrectionInterfaceComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x20];
    }; // 0x58
    static_assert(sizeof(ServerEntityCorrectionInterfaceComponent) == 0x58);
}