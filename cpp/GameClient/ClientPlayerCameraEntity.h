// Object: ClientPlayerCameraEntity
// ClassId: 6623
// RuntimeId: 26817
// TypeInfo: 0x0000000144E37020
#include "../GameClient/ClientCameraEntityBase.h"

namespace GameClient {
    class ClientPlayerCameraEntity : public GameClient::ClientCameraEntityBase {
        char pad_0x58[0xE8];
    }; // 0x140
    static_assert(sizeof(ClientPlayerCameraEntity) == 0x140);
}