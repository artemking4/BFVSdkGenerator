// Object: ClientFOVEntity
// ClassId: 6696
// RuntimeId: 55187
// TypeInfo: 0x0000000144CD5C60
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientFOVEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientFOVEntity) == 0x60);
}