// Object: AIFollowObjectEntityData
// ClassId: 1990
// RuntimeId: 7234
// TypeInfo: 0x0000000144C10F80
#include "../BattleAIShared/AIParameterEntityData.h"
#include "../Core/LinearTransform.h"
#include "../BattleAIShared/AIFollowObjectConfigAsset.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class AIFollowObjectEntityData : public BattleAIShared::AIParameterEntityData {
        char pad_0x28[0x8];
        Core::LinearTransform GoToPosition; // 0x30
        BattleAIShared::AIFollowObjectConfigAsset Config; // 0x70
        char pad_0x78[0x8];
    }; // 0x80
    static_assert(sizeof(AIFollowObjectEntityData) == 0x80);
}
#pragma pack(pop)