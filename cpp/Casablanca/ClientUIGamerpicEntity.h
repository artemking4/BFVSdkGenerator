// Object: ClientUIGamerpicEntity
// ClassId: 6947
// RuntimeId: 61834
// TypeInfo: 0x0000000144CB2D90
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIGamerpicEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientUIGamerpicEntity) == 0x58);
}