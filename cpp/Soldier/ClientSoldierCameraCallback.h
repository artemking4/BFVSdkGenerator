// Object: ClientSoldierCameraCallback
// ClassId: 8565
// RuntimeId: 34061
// TypeInfo: 0x0000000144F369F0
#include "../GameCommon/TargetCameraCallback.h"

namespace Soldier {
    class ClientSoldierCameraCallback : public GameCommon::TargetCameraCallback {
        char pad_0x8[0x10];
    }; // 0x18
    static_assert(sizeof(ClientSoldierCameraCallback) == 0x18);
}