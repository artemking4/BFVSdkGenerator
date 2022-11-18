// Object: ServerAimTransformBuilderEntity
// ClassId: 7435
// RuntimeId: 39933
// TypeInfo: 0x0000000144C62680
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerAimTransformBuilderEntity : public Entity::Entity {
        char pad_0x20[0x120];
    }; // 0x140
    static_assert(sizeof(ServerAimTransformBuilderEntity) == 0x140);
}