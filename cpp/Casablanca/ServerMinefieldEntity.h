// Object: ServerMinefieldEntity
// ClassId: 7602
// RuntimeId: 25956
// TypeInfo: 0x0000000144C3E860
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerMinefieldEntity : public Entity::Entity {
        char pad_0x20[0x5C0];
    }; // 0x5E0
    static_assert(sizeof(ServerMinefieldEntity) == 0x5E0);
}