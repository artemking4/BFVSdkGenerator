// Object: ClientActorEntity
// ClassId: 7894
// RuntimeId: 22752
// TypeInfo: 0x0000000144DAF700
#include "../GameClient/ClientPhysicsEntity.h"

namespace DiceCommons {
    class ClientActorEntity : public GameClient::ClientPhysicsEntity {
        char pad_0x1A8[0xA8];
    }; // 0x250
    static_assert(sizeof(ClientActorEntity) == 0x250);
}