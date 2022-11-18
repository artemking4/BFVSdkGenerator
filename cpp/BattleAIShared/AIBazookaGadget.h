// Object: AIBazookaGadget
// ClassId: 361
// RuntimeId: 30552
// TypeInfo: 0x0000000144C18C30
#include "../BattleAIShared/WeaponGadgetBase.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIBazookaGadget : public BattleAIShared::WeaponGadgetBase {
        Float32 LOFMinDistanceFromSelf; // 0x68
        Float32 LOFMaxDistanceFromTarget; // 0x6C
        Float32 LOFMinFractionTowardTarget; // 0x70
        Float32 MinDistanceFromEnemy; // 0x74
        Float32 MaxDistanceFromEnemy; // 0x78
        Boolean UseAgainstShieldedVehicles; // 0x7C
        Boolean UseAgainstPassivePlayers; // 0x7D
        char pad_0x7E[0x2];
    }; // 0x80
    static_assert(sizeof(AIBazookaGadget) == 0x80);
}
#pragma pack(pop)