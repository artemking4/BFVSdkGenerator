// Object: ClientSquadSpawnComponent
// ClassId: 5895
// RuntimeId: 33248
// TypeInfo: 0x0000000144C56460
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientSquadSpawnComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x28];
    }; // 0x60
    static_assert(sizeof(ClientSquadSpawnComponent) == 0x60);
}