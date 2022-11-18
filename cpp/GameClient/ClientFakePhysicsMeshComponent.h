// Object: ClientFakePhysicsMeshComponent
// ClassId: 5852
// RuntimeId: 40252
// TypeInfo: 0x0000000144E44500
#include "../GameClient/ClientMeshComponent.h"

namespace GameClient {
    class ClientFakePhysicsMeshComponent : public GameClient::ClientMeshComponent {
        char pad_0x58[0x70];
    }; // 0xC8
    static_assert(sizeof(ClientFakePhysicsMeshComponent) == 0xC8);
}