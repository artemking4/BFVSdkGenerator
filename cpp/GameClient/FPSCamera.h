// Object: FPSCamera
// ClassId: 44
// RuntimeId: 2860
// TypeInfo: 0x0000000144E36C10
#include "../GameCommon/TargetCamera.h"

namespace GameClient {
    class FPSCamera : public GameCommon::TargetCamera {
        char pad_0x1B0[0x30];
    }; // 0x1E0
    static_assert(sizeof(FPSCamera) == 0x1E0);
}