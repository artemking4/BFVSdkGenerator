// Object: ClientUIGetValueEntity
// ClassId: 6950
// RuntimeId: 6491
// TypeInfo: 0x0000000144F67E30
#include "../Entity/Entity.h"

namespace UIDataKeys {
    class ClientUIGetValueEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientUIGetValueEntity) == 0x60);
}