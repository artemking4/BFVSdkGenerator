// Object: ClientMeshBakerComponent
// ClassId: 5850
// RuntimeId: 43079
// TypeInfo: 0x0000000144E394B0
#include "../GameClient/ClientGameComponent.h"

namespace GameClient {
    class ClientMeshBakerComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x98];
    }; // 0xD0
    static_assert(sizeof(ClientMeshBakerComponent) == 0xD0);
}