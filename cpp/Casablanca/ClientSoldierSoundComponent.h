// Object: ClientSoldierSoundComponent
// ClassId: 5887
// RuntimeId: 42211
// TypeInfo: 0x0000000144CD39E0
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientSoldierSoundComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0xB8];
    }; // 0xF0
    static_assert(sizeof(ClientSoldierSoundComponent) == 0xF0);
}