// Object: ClientPreRoundEntity
// ClassId: 6809
// RuntimeId: 7417
// TypeInfo: 0x0000000144CD8220
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPreRoundEntity : public Entity::Entity {
        char pad_0x20[0xF0];
    }; // 0x110
    static_assert(sizeof(ClientPreRoundEntity) == 0x110);
}