// Object: ClientUIGameScoringEntity
// ClassId: 6945
// RuntimeId: 6191
// TypeInfo: 0x0000000144CB2C80
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIGameScoringEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientUIGameScoringEntity) == 0x58);
}