// Object: AIFollowTactic
// ClassId: 420
// RuntimeId: 22269
// TypeInfo: 0x0000000144C12F80
#include "../BattleAIShared/CoverTactic.h"
#include "../BattleAIShared/CoverQueryData.h"
#include "../BattleAIShared/FollowMoveSettings.h"
#include "../BattleAIShared/FollowCoverSettings.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIFollowTactic : public BattleAIShared::CoverTactic {
        BattleAIShared::CoverQueryData StealthCoverQuery; // 0x38
        BattleAIShared::FollowMoveSettings FollowMoveSettings; // 0x40
        BattleAIShared::FollowCoverSettings FollowStealthCoverSettings; // 0xB8
        char pad_0xCC[0x4];
        BattleAIShared::CoverQueryData AttackCoverQuery; // 0xD0
        BattleAIShared::FollowCoverSettings FollowAttackCoverSettings; // 0xD8
        char pad_0xEC[0x4];
    }; // 0xF0
    static_assert(sizeof(AIFollowTactic) == 0xF0);
}
#pragma pack(pop)