// Object: ChaseCamera
// ClassId: 43
// RuntimeId: 47583
// TypeInfo: 0x0000000144E3F410
#include "../GameCommon/TargetCamera.h"

namespace GameClient {
    class ChaseCamera : public GameCommon::TargetCamera {
        char pad_0x1B0[0x30];
    }; // 0x1E0
    static_assert(sizeof(ChaseCamera) == 0x1E0);
}