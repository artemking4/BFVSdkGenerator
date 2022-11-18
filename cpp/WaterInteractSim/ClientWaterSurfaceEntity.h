// Object: ClientWaterSurfaceEntity
// ClassId: 7929
// RuntimeId: 38485
// TypeInfo: 0x0000000144F72040
#include "../GameClient/ClientPhysicsEntity.h"

namespace WaterInteractSim {
    class ClientWaterSurfaceEntity : public GameClient::ClientPhysicsEntity {
        char pad_0x1A8[0x37A8];
    }; // 0x3950
    static_assert(sizeof(ClientWaterSurfaceEntity) == 0x3950);
}