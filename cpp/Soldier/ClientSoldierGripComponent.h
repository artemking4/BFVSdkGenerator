// Object: ClientSoldierGripComponent
// ClassId: 5882
// RuntimeId: 7459
// TypeInfo: 0x0000000144F33DE0
#include "../GameClient/ClientGameComponent.h"

namespace Soldier {
    class ClientSoldierGripComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0xA8];
    }; // 0xE0
    static_assert(sizeof(ClientSoldierGripComponent) == 0xE0);
}