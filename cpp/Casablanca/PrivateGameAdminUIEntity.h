// Object: PrivateGameAdminUIEntity
// ClassId: 7322
// RuntimeId: 24976
// TypeInfo: 0x0000000144C9C820
#include "../Entity/Entity.h"

namespace Casablanca {
    class PrivateGameAdminUIEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(PrivateGameAdminUIEntity) == 0x50);
}