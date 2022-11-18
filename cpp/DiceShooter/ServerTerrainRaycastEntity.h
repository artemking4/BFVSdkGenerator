// Object: ServerTerrainRaycastEntity
// ClassId: 7687
// RuntimeId: 59996
// TypeInfo: 0x0000000144DD23B0
#include "../DiceShooter/ServerRaycastEntity.h"

namespace DiceShooter {
    class ServerTerrainRaycastEntity : public DiceShooter::ServerRaycastEntity {
        char pad_0x170[0x10];
    }; // 0x180
    static_assert(sizeof(ServerTerrainRaycastEntity) == 0x180);
}