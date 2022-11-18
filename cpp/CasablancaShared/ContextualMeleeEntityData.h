// Object: ContextualMeleeEntityData
// ClassId: 2547
// RuntimeId: 1308
// TypeInfo: 0x0000000144D29CA0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../GameShared/ProfileOptionDataBool.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ContextualMeleeEntityData : public Entity::EntityData {
        Float32 MeleeAttackJumpCooldown; // 0x20
        char pad_0x24[0x4];
        GameShared::ProfileOptionDataBool BayonetButtonHold; // 0x28
        Boolean CanBayonetCharge; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(ContextualMeleeEntityData) == 0x38);
}
#pragma pack(pop)