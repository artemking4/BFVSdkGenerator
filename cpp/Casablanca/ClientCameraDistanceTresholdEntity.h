// Object: ClientCameraDistanceTresholdEntity
// ClassId: 6617
// RuntimeId: 49149
// TypeInfo: 0x0000000144C9ECD0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientCameraDistanceTresholdEntity : public Entity::Entity {
        char pad_0x20[0x68];
    }; // 0x88
    static_assert(sizeof(ClientCameraDistanceTresholdEntity) == 0x88);
}