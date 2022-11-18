// Object: ServerGameModeCategorizationEntity
// ClassId: 7563
// RuntimeId: 22491
// TypeInfo: 0x0000000144CF0130
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerGameModeCategorizationEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ServerGameModeCategorizationEntity) == 0x48);
}