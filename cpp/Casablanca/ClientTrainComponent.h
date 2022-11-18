// Object: ClientTrainComponent
// ClassId: 5862
// RuntimeId: 43872
// TypeInfo: 0x0000000144CCFC60
#include "../GameClient/ClientChassisComponent.h"

namespace Casablanca {
    class ClientTrainComponent : public GameClient::ClientChassisComponent {
        char pad_0x2510[0x40];
    }; // 0x2550
    static_assert(sizeof(ClientTrainComponent) == 0x2550);
}