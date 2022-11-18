// Object: ClientPropertyProfileEntity
// ClassId: 6825
// RuntimeId: 2314
// TypeInfo: 0x0000000144C4BB00
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPropertyProfileEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientPropertyProfileEntity) == 0x60);
}