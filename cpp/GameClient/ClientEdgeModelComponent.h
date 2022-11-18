// Object: ClientEdgeModelComponent
// ClassId: 5820
// RuntimeId: 8039
// TypeInfo: 0x0000000144E3D770
#include "../GameClient/ClientGameComponent.h"

namespace GameClient {
    class ClientEdgeModelComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0xA8];
    }; // 0xE0
    static_assert(sizeof(ClientEdgeModelComponent) == 0xE0);
}