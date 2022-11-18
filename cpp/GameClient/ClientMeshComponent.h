// Object: ClientMeshComponent
// ClassId: 5851
// RuntimeId: 65137
// TypeInfo: 0x0000000144E44400
#include "../GameClient/ClientGameComponent.h"

namespace GameClient {
    class ClientMeshComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x20];
    }; // 0x58
    static_assert(sizeof(ClientMeshComponent) == 0x58);
}