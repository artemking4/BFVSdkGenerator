// Object: ClientRemotePlayerAbilityStateEntity
// ClassId: 6798
// RuntimeId: 21465
// TypeInfo: 0x0000000144DE0A70
#include "../DiceShooter/ClientPlayerAbilityStateEntity.h"

namespace DiceShooter {
    class ClientRemotePlayerAbilityStateEntity : public DiceShooter::ClientPlayerAbilityStateEntity {
        char pad_0xD8[0x18];
    }; // 0xF0
    static_assert(sizeof(ClientRemotePlayerAbilityStateEntity) == 0xF0);
}