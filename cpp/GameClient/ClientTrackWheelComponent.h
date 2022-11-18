// Object: ClientTrackWheelComponent
// ClassId: 5800
// RuntimeId: 14651
// TypeInfo: 0x0000000144E44280
#include "../GameClient/ClientWheelComponent.h"

namespace GameClient {
    class ClientTrackWheelComponent : public GameClient::ClientWheelComponent {
        char pad_0x100[0x10];
    }; // 0x110
    static_assert(sizeof(ClientTrackWheelComponent) == 0x110);
}