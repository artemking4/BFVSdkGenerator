// Object: ClientCharacterMeshComponent
// ClassId: 5811
// RuntimeId: 38695
// TypeInfo: 0x0000000144E39630
#include "../GameClient/ClientGameComponent.h"

namespace GameClient {
    class ClientCharacterMeshComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x38];
    }; // 0x70
    static_assert(sizeof(ClientCharacterMeshComponent) == 0x70);
}