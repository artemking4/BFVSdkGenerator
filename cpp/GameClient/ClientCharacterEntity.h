// Object: ClientCharacterEntity
// ClassId: 7897
// RuntimeId: 37535
// TypeInfo: 0x0000000144E39830
#include "../GameClient/ClientControllableEntity.h"

namespace GameClient {
    class ClientCharacterEntity : public GameClient::ClientControllableEntity {
        char pad_0x338[0x190];
    }; // 0x4C8
    static_assert(sizeof(ClientCharacterEntity) == 0x4C8);
}