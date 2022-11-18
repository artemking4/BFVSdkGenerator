// Object: ClientSoldierBreathControlComponent
// ClassId: 5878
// RuntimeId: 15351
// TypeInfo: 0x0000000144F364E0
#include "../GameClient/ClientGameComponent.h"

namespace Soldier {
    class ClientSoldierBreathControlComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0xC0];
    }; // 0xF8
    static_assert(sizeof(ClientSoldierBreathControlComponent) == 0xF8);
}