// Object: VeniceClientSoldierCameraCallback
// ClassId: 8566
// RuntimeId: 64889
// TypeInfo: 0x0000000144C565E0
#include "../Soldier/ClientSoldierCameraCallback.h"

namespace Casablanca {
    class VeniceClientSoldierCameraCallback : public Soldier::ClientSoldierCameraCallback {
        char pad_0x18[0x10];
    }; // 0x28
    static_assert(sizeof(VeniceClientSoldierCameraCallback) == 0x28);
}