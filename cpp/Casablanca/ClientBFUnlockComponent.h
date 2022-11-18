// Object: ClientBFUnlockComponent
// ClassId: 5907
// RuntimeId: 55623
// TypeInfo: 0x0000000144C465D0
#include "../GameClient/ClientUnlockComponent.h"

namespace Casablanca {
    class ClientBFUnlockComponent : public GameClient::ClientUnlockComponent {
        char pad_0x100[0x20];
    }; // 0x120
    static_assert(sizeof(ClientBFUnlockComponent) == 0x120);
}