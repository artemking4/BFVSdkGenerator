// Object: InternalDestroyMeshEntity
// ClassId: 7206
// RuntimeId: 25422
// TypeInfo: 0x0000000144E32E00
#include "../Entity/Entity.h"

namespace GameClient {
    class InternalDestroyMeshEntity : public Entity::Entity {
        char pad_0x20[0x300];
    }; // 0x320
    static_assert(sizeof(InternalDestroyMeshEntity) == 0x320);
}