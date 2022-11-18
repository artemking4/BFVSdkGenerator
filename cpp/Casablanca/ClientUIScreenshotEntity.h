// Object: ClientUIScreenshotEntity
// ClassId: 6994
// RuntimeId: 2669
// TypeInfo: 0x0000000144C215A0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIScreenshotEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientUIScreenshotEntity) == 0x40);
}