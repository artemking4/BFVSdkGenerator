// Object: CharacterTargetCameraCallback
// ClassId: 8561
// RuntimeId: 63269
// TypeInfo: 0x0000000144E36990
#include "../GameCommon/TargetCameraCallback.h"

namespace GameClient {
    class CharacterTargetCameraCallback : public GameCommon::TargetCameraCallback {
        char pad_0x8[0x10];
    }; // 0x18
    static_assert(sizeof(CharacterTargetCameraCallback) == 0x18);
}