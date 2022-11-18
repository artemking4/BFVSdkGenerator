// Object: ServerWaterSurfaceEntity
// ClassId: 7976
// RuntimeId: 25604
// TypeInfo: 0x0000000144F72370
#include "../GameServer/ServerPhysicsEntity.h"

namespace WaterInteractSim {
    class ServerWaterSurfaceEntity : public GameServer::ServerPhysicsEntity {
        char pad_0x198[0xF8];
    }; // 0x290
    static_assert(sizeof(ServerWaterSurfaceEntity) == 0x290);
}