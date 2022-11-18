// Object: ClientTerrainEntity
// ClassId: 7927
// RuntimeId: 27232
// TypeInfo: 0x0000000144E33130
#include "../GameClient/ClientPhysicsEntity.h"

namespace GameClient {
    class ClientTerrainEntity : public GameClient::ClientPhysicsEntity {
        char pad_0x1A8[0x10C8];
    }; // 0x1270
    static_assert(sizeof(ClientTerrainEntity) == 0x1270);
}