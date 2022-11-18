// Object: ClientCameraDistanceEntity
// ClassId: 6615
// RuntimeId: 49003
// TypeInfo: 0x0000000144C9EEF0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientCameraDistanceEntity : public Entity::Entity {
        char pad_0x20[0x88];
    }; // 0xA8
    static_assert(sizeof(ClientCameraDistanceEntity) == 0xA8);
}