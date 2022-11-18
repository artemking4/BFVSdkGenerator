// Object: UavCamera
// ClassId: 47
// RuntimeId: 30716
// TypeInfo: 0x0000000144C5CEB0
#include "../GameCommon/TargetCamera.h"

namespace Casablanca {
    class UavCamera : public GameCommon::TargetCamera {
        char pad_0x1B0[0x50];
    }; // 0x200
    static_assert(sizeof(UavCamera) == 0x200);
}