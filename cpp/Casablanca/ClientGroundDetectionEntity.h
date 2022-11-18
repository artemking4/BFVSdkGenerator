// Object: ClientGroundDetectionEntity
// ClassId: 6723
// RuntimeId: 19801
// TypeInfo: 0x0000000144CD5930
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientGroundDetectionEntity : public Entity::Entity {
        char pad_0x20[0x330];
    }; // 0x350
    static_assert(sizeof(ClientGroundDetectionEntity) == 0x350);
}