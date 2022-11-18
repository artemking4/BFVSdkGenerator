// Object: ClientComponentTargetCameraCallback
// ClassId: 8563
// RuntimeId: 25121
// TypeInfo: 0x0000000144E35650
#include "../GameCommon/TargetCameraCallback.h"

namespace GameClient {
    class ClientComponentTargetCameraCallback : public GameCommon::TargetCameraCallback {
        char pad_0x8[0x48];
    }; // 0x50
    static_assert(sizeof(ClientComponentTargetCameraCallback) == 0x50);
}