// Object: ServerBFCoopExtractionPermissionEntity
// ClassId: 7449
// RuntimeId: 50948
// TypeInfo: 0x0000000144CDEB40
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerBFCoopExtractionPermissionEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ServerBFCoopExtractionPermissionEntity) == 0x40);
}