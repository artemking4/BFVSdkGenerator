// Object: ClientUIVideoLookupEntity
// ClassId: 7024
// RuntimeId: 65336
// TypeInfo: 0x0000000144C9A640
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIVideoLookupEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ClientUIVideoLookupEntity) == 0x48);
}