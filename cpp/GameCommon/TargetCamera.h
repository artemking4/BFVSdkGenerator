// Object: TargetCamera
// ClassId: 41
// RuntimeId: 51816
// TypeInfo: 0x0000000144E4AFD0
#include "../GameCommon/Camera.h"

namespace GameCommon {
    class TargetCamera : public GameCommon::Camera {
        char pad_0x1A0[0x10];
    }; // 0x1B0
    static_assert(sizeof(TargetCamera) == 0x1B0);
}