// Object: ClientBFRaycastEntity
// ClassId: 6835
// RuntimeId: 16545
// TypeInfo: 0x0000000144C90A80
#include "../DiceShooter/ClientRaycastEntity.h"

namespace Casablanca {
    class ClientBFRaycastEntity : public DiceShooter::ClientRaycastEntity {
        char pad_0x170[0x140];
    }; // 0x2B0
    static_assert(sizeof(ClientBFRaycastEntity) == 0x2B0);
}