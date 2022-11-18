// Object: ClientCharacterSpawnEntity
// ClassId: 7870
// RuntimeId: 42463
// TypeInfo: 0x0000000144E3BDC0
#include "../GameClient/ClientSpawnEntity.h"

namespace GameClient {
    class ClientCharacterSpawnEntity : public GameClient::ClientSpawnEntity {
        char pad_0x180[0x10];
    }; // 0x190
    static_assert(sizeof(ClientCharacterSpawnEntity) == 0x190);
}