// Object: ClientPingMarkerTriggerEntity
// ClassId: 6786
// RuntimeId: 31059
// TypeInfo: 0x0000000144C8A930
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPingMarkerTriggerEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientPingMarkerTriggerEntity) == 0x60);
}