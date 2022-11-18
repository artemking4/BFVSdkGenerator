// Object: GameView
// ClassId: 8568
// RuntimeId: 53557
// TypeInfo: 0x0000000144E4D5B0
#include "../GameCommon/TargetCameraCallback.h"

namespace GameCommon {
    class GameView : public GameCommon::TargetCameraCallback {
        char pad_0x8[0x8];
    }; // 0x10
    static_assert(sizeof(GameView) == 0x10);
}