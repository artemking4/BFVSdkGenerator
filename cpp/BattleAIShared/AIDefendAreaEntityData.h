// Object: AIDefendAreaEntityData
// ClassId: 1994
// RuntimeId: 63269
// TypeInfo: 0x0000000144C10900
#include "../BattleAIShared/AIParameterWithShapeEntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class AIDefendAreaEntityData : public BattleAIShared::AIParameterWithShapeEntityData {
        Float32 FollowObjectAttractRadius; // 0x80
        char pad_0x84[0xC];
    }; // 0x90
    static_assert(sizeof(AIDefendAreaEntityData) == 0x90);
}
#pragma pack(pop)