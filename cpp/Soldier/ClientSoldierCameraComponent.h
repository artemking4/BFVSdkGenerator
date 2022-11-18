// Object: ClientSoldierCameraComponent
// ClassId: 5807
// RuntimeId: 54945
// TypeInfo: 0x0000000144F36460
#include "../GameClient/ClientCharacterCameraComponent.h"

namespace Soldier {
    class ClientSoldierCameraComponent : public GameClient::ClientCharacterCameraComponent {
        char pad_0x70[0x2A0];
    }; // 0x310
    static_assert(sizeof(ClientSoldierCameraComponent) == 0x310);
}