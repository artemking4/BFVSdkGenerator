// Object: ClientSoldierCameraTrack
// ClassId: 8591
// RuntimeId: 20477
// TypeInfo: 0x0000000144F34D00
#include "../GameClient/ClientCameraTrack.h"

namespace Soldier {
    class ClientSoldierCameraTrack : public GameClient::ClientCameraTrack {
        char pad_0x200[0x10];
    }; // 0x210
    static_assert(sizeof(ClientSoldierCameraTrack) == 0x210);
}