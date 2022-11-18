// Object: ClientBFSoldierSpawnEntity
// ClassId: 7871
// RuntimeId: 63733
// TypeInfo: 0x0000000144C90970
#include "../GameClient/ClientCharacterSpawnEntity.h"

namespace Casablanca {
    class ClientBFSoldierSpawnEntity : public GameClient::ClientCharacterSpawnEntity {
        char pad_0x190[0x60];
    }; // 0x1F0
    static_assert(sizeof(ClientBFSoldierSpawnEntity) == 0x1F0);
}