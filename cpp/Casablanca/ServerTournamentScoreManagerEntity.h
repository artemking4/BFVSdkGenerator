// Object: ServerTournamentScoreManagerEntity
// ClassId: 7755
// RuntimeId: 19487
// TypeInfo: 0x0000000144CDF9A0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerTournamentScoreManagerEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ServerTournamentScoreManagerEntity) == 0x58);
}