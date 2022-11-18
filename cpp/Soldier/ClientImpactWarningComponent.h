// Object: ClientImpactWarningComponent
// ClassId: 5843
// RuntimeId: 59901
// TypeInfo: 0x0000000144F33EE0
#include "../GameClient/ClientGameComponent.h"

namespace Soldier {
    class ClientImpactWarningComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x58];
    }; // 0x90
    static_assert(sizeof(ClientImpactWarningComponent) == 0x90);
}