// Object: ClientUIMatchEntity
// ClassId: 6968
// RuntimeId: 29931
// TypeInfo: 0x0000000144CB20D0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIMatchEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ClientUIMatchEntity) == 0x68);
}