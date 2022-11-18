// Object: AnimatedSoldierCamera
// ClassId: 42
// RuntimeId: 15977
// TypeInfo: 0x0000000144C5CF30
#include "../GameCommon/TargetCamera.h"

namespace Casablanca {
    class AnimatedSoldierCamera : public GameCommon::TargetCamera {
        char pad_0x1B0[0x10];
    }; // 0x1C0
    static_assert(sizeof(AnimatedSoldierCamera) == 0x1C0);
}