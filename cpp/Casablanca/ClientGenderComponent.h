// Object: ClientGenderComponent
// ClassId: 5839
// RuntimeId: 61521
// TypeInfo: 0x0000000144CD3EE0
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientGenderComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x8];
    }; // 0x40
    static_assert(sizeof(ClientGenderComponent) == 0x40);
}