// Object: AIChaseTactic
// ClassId: 408
// RuntimeId: 57793
// TypeInfo: 0x0000000144C13500
#include "../BattleAIShared/TacticBase.h"
#include "../Global/Float32.h"
#include "../BattleAIShared/ProjectileSettings.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIChaseTactic : public BattleAIShared::TacticBase {
        Float32 MaxChaseDistance; // 0x28
        char pad_0x2C[0x4];
        BattleAIShared::ProjectileSettings MeleeProjectileSettings; // 0x30
        BattleAIShared::ProjectileSettings ProjectileSettings; // 0x38
    }; // 0x40
    static_assert(sizeof(AIChaseTactic) == 0x40);
}
#pragma pack(pop)