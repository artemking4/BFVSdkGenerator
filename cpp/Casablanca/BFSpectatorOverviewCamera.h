// Object: BFSpectatorOverviewCamera
// ClassId: 37
// RuntimeId: 38540
// TypeInfo: 0x0000000144C467D0
#include "../GameCommon/Camera.h"

namespace Casablanca {
    class BFSpectatorOverviewCamera : public GameCommon::Camera {
        char pad_0x1A0[0xB0];
    }; // 0x250
    static_assert(sizeof(BFSpectatorOverviewCamera) == 0x250);
}