// Object: ServerPlayerHotspotEntity
// ClassId: 7669
// RuntimeId: 11118
// TypeInfo: 0x0000000144C3E640
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPlayerHotspotEntity : public Entity::Entity {
        char pad_0x20[0xAB8];
    }; // 0xAD8
    static_assert(sizeof(ServerPlayerHotspotEntity) == 0xAD8);
}