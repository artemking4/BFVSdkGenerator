// Object: StaticCamera
// ClassId: 46
// RuntimeId: 28647
// TypeInfo: 0x0000000144E36A90
#include "../GameCommon/TargetCamera.h"

namespace GameClient {
    class StaticCamera : public GameCommon::TargetCamera {
        char pad_0x1B0[0x130];
    }; // 0x2E0
    static_assert(sizeof(StaticCamera) == 0x2E0);
}