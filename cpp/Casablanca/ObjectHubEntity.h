// Object: ObjectHubEntity
// ClassId: 7276
// RuntimeId: 45376
// TypeInfo: 0x0000000144CD9EA0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ObjectHubEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ObjectHubEntity) == 0x48);
}