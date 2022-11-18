// Object: ClientDakarSquadRespawnInteractionEntity
// ClassId: 8002
// RuntimeId: 53079
// TypeInfo: 0x0000000144C88700
#include "../Casablanca/ClientDakarInteractionEntity.h"

namespace Casablanca {
    class ClientDakarSquadRespawnInteractionEntity : public Casablanca::ClientDakarInteractionEntity {
        char pad_0xE0[0x10];
    }; // 0xF0
    static_assert(sizeof(ClientDakarSquadRespawnInteractionEntity) == 0xF0);
}