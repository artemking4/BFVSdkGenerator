// Object: ClientShaderParameterComponent
// ClassId: 5872
// RuntimeId: 41209
// TypeInfo: 0x0000000144E41610
#include "../GameClient/ClientGameComponent.h"

namespace GameClient {
    class ClientShaderParameterComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x50];
    }; // 0x88
    static_assert(sizeof(ClientShaderParameterComponent) == 0x88);
}