// Object: ClientTowHitchComponent
// ClassId: 5903
// RuntimeId: 26681
// TypeInfo: 0x0000000144F6FDB0
#include "../GameClient/ClientGameComponent.h"

namespace Vehicle {
    class ClientTowHitchComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0xF8];
    }; // 0x130
    static_assert(sizeof(ClientTowHitchComponent) == 0x130);
}