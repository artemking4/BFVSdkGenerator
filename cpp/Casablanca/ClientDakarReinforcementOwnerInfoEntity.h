// Object: ClientDakarReinforcementOwnerInfoEntity
// ClassId: 6657
// RuntimeId: 25292
// TypeInfo: 0x0000000144C88920
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientDakarReinforcementOwnerInfoEntity : public Entity::Entity {
        char pad_0x20[0xD8];
    }; // 0xF8
    static_assert(sizeof(ClientDakarReinforcementOwnerInfoEntity) == 0xF8);
}