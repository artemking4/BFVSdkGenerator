// Object: ClientOwnedGameComponentEntity
// ClassId: 7891
// RuntimeId: 59544
// TypeInfo: 0x0000000144DAF1B0
#include "../GameClient/ClientGameComponentEntity.h"

namespace DiceCommons {
    class ClientOwnedGameComponentEntity : public GameClient::ClientGameComponentEntity {
        char pad_0x188[0x10];
    }; // 0x198
    static_assert(sizeof(ClientOwnedGameComponentEntity) == 0x198);
}