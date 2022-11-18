// Object: AnselFreeCamera
// ClassId: 35
// RuntimeId: 2228
// TypeInfo: 0x0000000144DAB920
#include "../GameCommon/Camera.h"

namespace DiceCommons {
    class AnselFreeCamera : public GameCommon::Camera {
        char pad_0x1A0[0x80];
    }; // 0x220
    static_assert(sizeof(AnselFreeCamera) == 0x220);
}