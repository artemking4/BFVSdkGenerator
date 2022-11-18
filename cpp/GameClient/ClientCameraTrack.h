// Object: ClientCameraTrack
// ClassId: 8590
// RuntimeId: 36758
// TypeInfo: 0x0000000144E36D90
#include "../GameClient/PhysicalCameraTrack.h"

namespace GameClient {
    class ClientCameraTrack : public GameClient::PhysicalCameraTrack {
        char pad_0x1B0[0x50];
    }; // 0x200
    static_assert(sizeof(ClientCameraTrack) == 0x200);
}