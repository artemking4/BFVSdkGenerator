// Object: ClientSpecialMovesComponent
// ClassId: 5892
// RuntimeId: 59058
// TypeInfo: 0x0000000144CD3960
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientSpecialMovesComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x728];
    }; // 0x760
    static_assert(sizeof(ClientSpecialMovesComponent) == 0x760);
}