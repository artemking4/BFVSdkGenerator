// Object: ClientUIRoundOutcomeEntity
// ClassId: 6986
// RuntimeId: 34616
// TypeInfo: 0x0000000144CB4CF0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIRoundOutcomeEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(ClientUIRoundOutcomeEntity) == 0x78);
}