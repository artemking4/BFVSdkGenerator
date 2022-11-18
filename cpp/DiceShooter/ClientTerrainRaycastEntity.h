// Object: ClientTerrainRaycastEntity
// ClassId: 6836
// RuntimeId: 50676
// TypeInfo: 0x0000000144DCCCD0
#include "../DiceShooter/ClientRaycastEntity.h"

namespace DiceShooter {
    class ClientTerrainRaycastEntity : public DiceShooter::ClientRaycastEntity {
        char pad_0x170[0x10];
    }; // 0x180
    static_assert(sizeof(ClientTerrainRaycastEntity) == 0x180);
}