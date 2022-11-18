// Object: ClientTakeScreenshotEntity
// ClassId: 6892
// RuntimeId: 12348
// TypeInfo: 0x0000000144E342E0
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientTakeScreenshotEntity : public Entity::Entity {
        char pad_0x20[0x88];
    }; // 0xA8
    static_assert(sizeof(ClientTakeScreenshotEntity) == 0xA8);
}