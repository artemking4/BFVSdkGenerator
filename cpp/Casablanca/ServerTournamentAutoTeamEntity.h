// Object: ServerTournamentAutoTeamEntity
// ClassId: 7754
// RuntimeId: 18304
// TypeInfo: 0x0000000144CDFCD0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerTournamentAutoTeamEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ServerTournamentAutoTeamEntity) == 0x40);
}