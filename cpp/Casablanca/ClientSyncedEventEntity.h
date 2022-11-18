// Object: ClientSyncedEventEntity
// ClassId: 6883
// RuntimeId: 17195
// TypeInfo: 0x0000000144C54440
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientSyncedEventEntity : public Entity::Entity {
        char pad_0x20[0x88];
    }; // 0xA8
    static_assert(sizeof(ClientSyncedEventEntity) == 0xA8);
}