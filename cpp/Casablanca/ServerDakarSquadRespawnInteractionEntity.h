// Object: ServerDakarSquadRespawnInteractionEntity
// ClassId: 8004
// RuntimeId: 10075
// TypeInfo: 0x0000000144C39C20
#include "../Casablanca/ServerDakarInteractionEntity.h"

namespace Casablanca {
    class ServerDakarSquadRespawnInteractionEntity : public Casablanca::ServerDakarInteractionEntity {
        char pad_0xF0[0x10];
    }; // 0x100
    static_assert(sizeof(ServerDakarSquadRespawnInteractionEntity) == 0x100);
}