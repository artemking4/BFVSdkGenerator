// Object: ClientSoldierEntryComponent
// ClassId: 5831
// RuntimeId: 46639
// TypeInfo: 0x0000000144F33D60
#include "../GameClient/ClientEntryComponent.h"

namespace Soldier {
    class ClientSoldierEntryComponent : public GameClient::ClientEntryComponent {
        char pad_0x410[0x3B0];
    }; // 0x7C0
    static_assert(sizeof(ClientSoldierEntryComponent) == 0x7C0);
}