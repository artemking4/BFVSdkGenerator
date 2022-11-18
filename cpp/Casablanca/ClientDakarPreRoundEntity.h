// Object: ClientDakarPreRoundEntity
// ClassId: 6655
// RuntimeId: 57244
// TypeInfo: 0x0000000144C88B40
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientDakarPreRoundEntity : public Entity::Entity {
        char pad_0x20[0xE8];
    }; // 0x108
    static_assert(sizeof(ClientDakarPreRoundEntity) == 0x108);
}