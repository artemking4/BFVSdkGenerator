// Object: ClientWaterEntity
// ClassId: 7928
// RuntimeId: 35169
// TypeInfo: 0x0000000144E33020
#include "../GameClient/ClientPhysicsEntity.h"

namespace GameClient {
    class ClientWaterEntity : public GameClient::ClientPhysicsEntity {
        char pad_0x1A8[0x8];
    }; // 0x1B0
    static_assert(sizeof(ClientWaterEntity) == 0x1B0);
}