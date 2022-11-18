// Object: ClientANTAnimatableCameraTrack
// ClassId: 8589
// RuntimeId: 45434
// TypeInfo: 0x0000000144E3F390
#include "../GameClient/PhysicalCameraTrack.h"

namespace GameClient {
    class ClientANTAnimatableCameraTrack : public GameClient::PhysicalCameraTrack {
        char pad_0x1B0[0x20];
    }; // 0x1D0
    static_assert(sizeof(ClientANTAnimatableCameraTrack) == 0x1D0);
}