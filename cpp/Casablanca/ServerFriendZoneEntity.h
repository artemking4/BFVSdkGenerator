// Object: ServerFriendZoneEntity
// ClassId: 7560
// RuntimeId: 19601
// TypeInfo: 0x0000000144C3EEC0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerFriendZoneEntity : public Entity::Entity {
        char pad_0x20[0x160];
    }; // 0x180
    static_assert(sizeof(ServerFriendZoneEntity) == 0x180);
}