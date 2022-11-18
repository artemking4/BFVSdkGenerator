// Object: ServerPilotEntityBase
// ClassId: 7653
// RuntimeId: 1972
// TypeInfo: 0x0000000144BF7C50
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerPilotEntityBase : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerPilotEntityBase) == 0x30);
}