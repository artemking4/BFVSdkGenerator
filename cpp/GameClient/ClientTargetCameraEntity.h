// Object: ClientTargetCameraEntity
// ClassId: 6624
// RuntimeId: 25490
// TypeInfo: 0x0000000144E37130
#include "../GameClient/ClientCameraEntityBase.h"

namespace GameClient {
    class ClientTargetCameraEntity : public GameClient::ClientCameraEntityBase {
        char pad_0x58[0x20];
    }; // 0x78
    static_assert(sizeof(ClientTargetCameraEntity) == 0x78);
}