// Object: BFServerCharacterStateTriggerEntity
// ClassId: 7765
// RuntimeId: 21472
// TypeInfo: 0x0000000144C40140
#include "../Soldier/ServerCharacterStateTriggerEntity.h"

namespace Casablanca {
    class BFServerCharacterStateTriggerEntity : public Soldier::ServerCharacterStateTriggerEntity {
        char pad_0xB0[0x50];
    }; // 0x100
    static_assert(sizeof(BFServerCharacterStateTriggerEntity) == 0x100);
}