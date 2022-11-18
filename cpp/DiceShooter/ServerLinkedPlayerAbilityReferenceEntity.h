// Object: ServerLinkedPlayerAbilityReferenceEntity
// ClassId: 7662
// RuntimeId: 58834
// TypeInfo: 0x0000000144DE0850
#include "../DiceShooter/ServerPlayerAbilityReferenceEntity.h"

namespace DiceShooter {
    class ServerLinkedPlayerAbilityReferenceEntity : public DiceShooter::ServerPlayerAbilityReferenceEntity {
        char pad_0xC8[0x78];
    }; // 0x140
    static_assert(sizeof(ServerLinkedPlayerAbilityReferenceEntity) == 0x140);
}