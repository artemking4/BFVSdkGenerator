// Object: AIPreferredAreaEntityData
// ClassId: 1999
// RuntimeId: 19315
// TypeInfo: 0x0000000144C10980
#include "../BattleAIShared/AIParameterWithShapeEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class AIPreferredAreaEntityData : public BattleAIShared::AIParameterWithShapeEntityData {
        Float32 FollowObjectAttractRadius; // 0x80
        Float32 InfluenceDistanceOutsideShape; // 0x84
        Float32 Score; // 0x88
        Boolean UseOwnLastPositionAsOrigin; // 0x8C
        char pad_0x8D[0x3];
    }; // 0x90
    static_assert(sizeof(AIPreferredAreaEntityData) == 0x90);
}
#pragma pack(pop)