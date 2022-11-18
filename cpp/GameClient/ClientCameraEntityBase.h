// Object: ClientCameraEntityBase
// ClassId: 6618
// RuntimeId: 31992
// TypeInfo: 0x0000000144E37460
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientCameraEntityBase : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientCameraEntityBase) == 0x58);
}