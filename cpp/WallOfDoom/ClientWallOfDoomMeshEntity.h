// Object: ClientWallOfDoomMeshEntity
// ClassId: 7925
// RuntimeId: 62610
// TypeInfo: 0x0000000144F70F70
#include "../GameClient/ClientStaticModelEntity.h"

namespace WallOfDoom {
    class ClientWallOfDoomMeshEntity : public GameClient::ClientStaticModelEntity {
        char pad_0x3A0[0xB0];
    }; // 0x450
    static_assert(sizeof(ClientWallOfDoomMeshEntity) == 0x450);
}