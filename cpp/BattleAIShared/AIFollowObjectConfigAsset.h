// Object: AIFollowObjectConfigAsset
// ClassId: 282
// RuntimeId: 14541
// TypeInfo: 0x0000000144C11100
#include "../Core/DataContainerPolicyAsset.h"
#include "../BattleAIShared/FollowObjectSlotConfig.h"
#include "../BattleAIShared/FollowObjectMoveParams.h"
#include "../BattleAIShared/FollowObjectSustainedMovementParams.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIFollowObjectConfigAsset : public Core::DataContainerPolicyAsset {
        BattleAIShared::FollowObjectSlotConfig SlotConfig; // 0x20
        BattleAIShared::FollowObjectMoveParams MoveParams; // 0xA8
        BattleAIShared::FollowObjectSustainedMovementParams SustainedMovementParams; // 0xE0
        Float32 MinFollowerDistToCheckTeleport; // 0xF0
        char pad_0xF4[0x4];
    }; // 0xF8
    static_assert(sizeof(AIFollowObjectConfigAsset) == 0xF8);
}
#pragma pack(pop)