// Object: ClientLinkedPlayerAbilityReferenceEntity
// ClassId: 6796
// RuntimeId: 63393
// TypeInfo: 0x0000000144DE2210
#include "../DiceShooter/ClientPlayerAbilityReferenceEntity.h"

namespace DiceShooter {
    class ClientLinkedPlayerAbilityReferenceEntity : public DiceShooter::ClientPlayerAbilityReferenceEntity {
        char pad_0xE8[0x78];
    }; // 0x160
    static_assert(sizeof(ClientLinkedPlayerAbilityReferenceEntity) == 0x160);
}