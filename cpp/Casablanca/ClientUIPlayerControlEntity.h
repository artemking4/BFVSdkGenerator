// Object: ClientUIPlayerControlEntity
// ClassId: 6982
// RuntimeId: 50952
// TypeInfo: 0x0000000144CB4F10
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIPlayerControlEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(ClientUIPlayerControlEntity) == 0x80);
}