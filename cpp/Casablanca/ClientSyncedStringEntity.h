// Object: ClientSyncedStringEntity
// ClassId: 6888
// RuntimeId: 30278
// TypeInfo: 0x0000000144CD7230
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientSyncedStringEntity : public Entity::Entity {
        char pad_0x20[0xA8];
    }; // 0xC8
    static_assert(sizeof(ClientSyncedStringEntity) == 0xC8);
}