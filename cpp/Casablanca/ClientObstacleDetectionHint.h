// Object: ClientObstacleDetectionHint
// ClassId: 6766
// RuntimeId: 49441
// TypeInfo: 0x0000000144CD52D0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientObstacleDetectionHint : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientObstacleDetectionHint) == 0x38);
}