// Object: ServerAirTargetSelectorEntity
// ClassId: 7438
// RuntimeId: 29197
// TypeInfo: 0x0000000144BF8F70
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerAirTargetSelectorEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ServerAirTargetSelectorEntity) == 0x68);
}