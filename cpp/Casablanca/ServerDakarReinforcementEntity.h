// Object: ServerDakarReinforcementEntity
// ClassId: 7488
// RuntimeId: 49360
// TypeInfo: 0x0000000144C39F50
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerDakarReinforcementEntity : public Entity::Entity {
        char pad_0x20[0x208];
    }; // 0x228
    static_assert(sizeof(ServerDakarReinforcementEntity) == 0x228);
}