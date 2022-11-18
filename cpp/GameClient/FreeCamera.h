// Object: FreeCamera
// ClassId: 40
// RuntimeId: 14200
// TypeInfo: 0x0000000144E36B90
#include "../GameCommon/Camera.h"

namespace GameClient {
    class FreeCamera : public GameCommon::Camera {
        char pad_0x1A0[0xC0];
    }; // 0x260
    static_assert(sizeof(FreeCamera) == 0x260);
}