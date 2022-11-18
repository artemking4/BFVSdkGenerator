// Object: ClientMaterialBasedEffectEntity
// ClassId: 6674
// RuntimeId: 10926
// TypeInfo: 0x0000000144DD8DC0
#include "../DiceShooter/ClientDiceVFXEntityBase.h"

namespace DiceShooter {
    class ClientMaterialBasedEffectEntity : public DiceShooter::ClientDiceVFXEntityBase {
        char pad_0x130[0x140];
    }; // 0x270
    static_assert(sizeof(ClientMaterialBasedEffectEntity) == 0x270);
}