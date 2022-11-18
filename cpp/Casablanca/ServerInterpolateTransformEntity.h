// Object: ServerInterpolateTransformEntity
// ClassId: 7579
// RuntimeId: 62438
// TypeInfo: 0x0000000144C3EA80
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerInterpolateTransformEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ServerInterpolateTransformEntity) == 0x48);
}