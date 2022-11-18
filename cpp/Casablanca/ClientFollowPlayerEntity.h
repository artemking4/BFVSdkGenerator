// Object: ClientFollowPlayerEntity
// ClassId: 6711
// RuntimeId: 49544
// TypeInfo: 0x0000000144CD5F90
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientFollowPlayerEntity : public Entity::Entity {
        char pad_0x20[0x260];
    }; // 0x280
    static_assert(sizeof(ClientFollowPlayerEntity) == 0x280);
}