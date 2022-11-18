// Object: ClientPingMarkerManagerEntity
// ClassId: 6785
// RuntimeId: 40022
// TypeInfo: 0x0000000144CD4FA0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPingMarkerManagerEntity : public Entity::Entity {
        char pad_0x20[0x2060];
    }; // 0x2080
    static_assert(sizeof(ClientPingMarkerManagerEntity) == 0x2080);
}