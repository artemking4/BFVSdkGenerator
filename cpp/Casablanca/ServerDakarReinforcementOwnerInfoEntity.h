// Object: ServerDakarReinforcementOwnerInfoEntity
// ClassId: 7489
// RuntimeId: 39126
// TypeInfo: 0x0000000144C39E40
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerDakarReinforcementOwnerInfoEntity : public Entity::Entity {
        char pad_0x20[0x140];
    }; // 0x160
    static_assert(sizeof(ServerDakarReinforcementOwnerInfoEntity) == 0x160);
}