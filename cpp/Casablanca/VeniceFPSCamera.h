// Object: VeniceFPSCamera
// ClassId: 45
// RuntimeId: 5024
// TypeInfo: 0x0000000144C5CE30
#include "../GameClient/FPSCamera.h"

namespace Casablanca {
    class VeniceFPSCamera : public GameClient::FPSCamera {
        char pad_0x1E0[0x10];
    }; // 0x1F0
    static_assert(sizeof(VeniceFPSCamera) == 0x1F0);
}