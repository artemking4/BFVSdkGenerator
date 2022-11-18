// Object: ClientVehicleCameraComponentProxyEntity
// ClassId: 7031
// RuntimeId: 29218
// TypeInfo: 0x0000000144CB6390
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientVehicleCameraComponentProxyEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ClientVehicleCameraComponentProxyEntity) == 0x70);
}