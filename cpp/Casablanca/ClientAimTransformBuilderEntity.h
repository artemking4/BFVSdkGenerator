// Object: ClientAimTransformBuilderEntity
// ClassId: 6312
// RuntimeId: 35150
// TypeInfo: 0x0000000144C495A0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientAimTransformBuilderEntity : public Entity::Entity {
        char pad_0x20[0x130];
    }; // 0x150
    static_assert(sizeof(ClientAimTransformBuilderEntity) == 0x150);
}