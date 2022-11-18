// Object: ServerBFRaycastEntity
// ClassId: 7686
// RuntimeId: 21974
// TypeInfo: 0x0000000144C3C510
#include "../DiceShooter/ServerRaycastEntity.h"

namespace Casablanca {
    class ServerBFRaycastEntity : public DiceShooter::ServerRaycastEntity {
        char pad_0x170[0x140];
    }; // 0x2B0
    static_assert(sizeof(ServerBFRaycastEntity) == 0x2B0);
}