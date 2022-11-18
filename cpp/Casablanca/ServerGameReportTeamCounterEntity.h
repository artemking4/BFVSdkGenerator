// Object: ServerGameReportTeamCounterEntity
// ClassId: 7564
// RuntimeId: 23637
// TypeInfo: 0x0000000144CE6EC0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerGameReportTeamCounterEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ServerGameReportTeamCounterEntity) == 0x58);
}