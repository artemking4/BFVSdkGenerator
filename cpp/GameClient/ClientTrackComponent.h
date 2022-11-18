// Object: ClientTrackComponent
// ClassId: 5854
// RuntimeId: 45452
// TypeInfo: 0x0000000144E44000
#include "../GameClient/ClientFakePhysicsMeshComponent.h"

namespace GameClient {
    class ClientTrackComponent : public GameClient::ClientFakePhysicsMeshComponent {
        char pad_0xC8[0xB0];
    }; // 0x178
    static_assert(sizeof(ClientTrackComponent) == 0x178);
}