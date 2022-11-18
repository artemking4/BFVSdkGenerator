// Object: ClientUIEventLogDataProviderEntity
// ClassId: 6942
// RuntimeId: 37932
// TypeInfo: 0x0000000144CAE920
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIEventLogDataProviderEntity : public Entity::Entity {
        char pad_0x20[0x78];
    }; // 0x98
    static_assert(sizeof(ClientUIEventLogDataProviderEntity) == 0x98);
}