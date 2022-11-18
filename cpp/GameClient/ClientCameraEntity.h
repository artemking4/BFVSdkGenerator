// Object: ClientCameraEntity
// ClassId: 6621
// RuntimeId: 10492
// TypeInfo: 0x0000000144E37350
#include "../GameClient/ClientCameraEntityBase.h"

namespace GameClient {
    class ClientCameraEntity : public GameClient::ClientCameraEntityBase {
        char pad_0x58[0x20];
    }; // 0x78
    static_assert(sizeof(ClientCameraEntity) == 0x78);
}