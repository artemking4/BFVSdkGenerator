// Object: ServerDakarPublicEventsManager
// ClassId: 7487
// RuntimeId: 59273
// TypeInfo: 0x0000000144C3A060
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerDakarPublicEventsManager : public Entity::Entity {
        char pad_0x20[0xD0];
    }; // 0xF0
    static_assert(sizeof(ServerDakarPublicEventsManager) == 0xF0);
}