// Object: ClientUIPopupEntity
// ClassId: 6983
// RuntimeId: 1441
// TypeInfo: 0x0000000144CB4E00
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIPopupEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientUIPopupEntity) == 0x60);
}