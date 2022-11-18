// Object: ServerRemotePlayerAbilityStateEntity
// ClassId: 7664
// RuntimeId: 8463
// TypeInfo: 0x0000000144DE0410
#include "../DiceShooter/ServerPlayerAbilityStateEntity.h"

namespace DiceShooter {
    class ServerRemotePlayerAbilityStateEntity : public DiceShooter::ServerPlayerAbilityStateEntity {
        char pad_0xD8[0x18];
    }; // 0xF0
    static_assert(sizeof(ServerRemotePlayerAbilityStateEntity) == 0xF0);
}