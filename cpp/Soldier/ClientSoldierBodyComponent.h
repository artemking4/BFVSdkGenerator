// Object: ClientSoldierBodyComponent
// ClassId: 5877
// RuntimeId: 16375
// TypeInfo: 0x0000000144F36560
#include "../GameClient/ClientGameComponent.h"

namespace Soldier {
    class ClientSoldierBodyComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x188];
    }; // 0x1C0
    static_assert(sizeof(ClientSoldierBodyComponent) == 0x1C0);
}