// Object: ServerTrackPlayerQueryEntity
// ClassId: 7756
// RuntimeId: 64439
// TypeInfo: 0x0000000144C4B7D0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerTrackPlayerQueryEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerTrackPlayerQueryEntity) == 0x30);
}