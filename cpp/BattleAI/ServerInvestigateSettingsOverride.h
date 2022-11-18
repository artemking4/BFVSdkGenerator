// Object: ServerInvestigateSettingsOverride
// ClassId: 7581
// RuntimeId: 15104
// TypeInfo: 0x0000000144BF4260
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerInvestigateSettingsOverride : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerInvestigateSettingsOverride) == 0x30);
}