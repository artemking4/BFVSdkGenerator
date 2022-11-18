// Object: BFSpectatorCollidableFreeCamera
// ClassId: 36
// RuntimeId: 37824
// TypeInfo: 0x0000000144C46850
#include "../GameCommon/Camera.h"

namespace Casablanca {
    class BFSpectatorCollidableFreeCamera : public GameCommon::Camera {
        char pad_0x1A0[0x200];
    }; // 0x3A0
    static_assert(sizeof(BFSpectatorCollidableFreeCamera) == 0x3A0);
}