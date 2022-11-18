// Object: ClientTowCouplerComponent
// ClassId: 5902
// RuntimeId: 59988
// TypeInfo: 0x0000000144F6FBB0
#include "../GameClient/ClientGameComponent.h"

namespace Vehicle {
    class ClientTowCouplerComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x58];
    }; // 0x90
    static_assert(sizeof(ClientTowCouplerComponent) == 0x90);
}