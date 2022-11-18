// Object: ClientTournamentInfoEntity
// ClassId: 6903
// RuntimeId: 32273
// TypeInfo: 0x0000000144C4C490
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientTournamentInfoEntity : public Entity::Entity {
        char pad_0x20[0x78];
    }; // 0x98
    static_assert(sizeof(ClientTournamentInfoEntity) == 0x98);
}