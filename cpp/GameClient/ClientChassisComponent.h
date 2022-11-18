// Object: ClientChassisComponent
// ClassId: 5861
// RuntimeId: 1527
// TypeInfo: 0x0000000144E35450
#include "../GameClient/ClientPartComponent.h"

namespace GameClient {
    class ClientChassisComponent : public GameClient::ClientPartComponent {
        char pad_0xD0[0x2440];
    }; // 0x2510
    static_assert(sizeof(ClientChassisComponent) == 0x2510);
}