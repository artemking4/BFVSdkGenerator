// Object: ServerZoneControlPlayerScoreEntity
// ClassId: 7799
// RuntimeId: 20395
// TypeInfo: 0x0000000144CE18A0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerZoneControlPlayerScoreEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ServerZoneControlPlayerScoreEntity) == 0x48);
}