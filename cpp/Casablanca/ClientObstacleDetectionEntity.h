// Object: ClientObstacleDetectionEntity
// ClassId: 6765
// RuntimeId: 57715
// TypeInfo: 0x0000000144CD53E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientObstacleDetectionEntity : public Entity::Entity {
        char pad_0x20[0x6E0];
    }; // 0x700
    static_assert(sizeof(ClientObstacleDetectionEntity) == 0x700);
}