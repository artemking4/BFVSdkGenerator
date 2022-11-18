// Object: AIParameterWithShapeEntityData
// ClassId: 1992
// RuntimeId: 8755
// TypeInfo: 0x0000000144C11C80
#include "../BattleAIShared/AIParameterEntityData.h"
#include "../Global/Boolean.h"
#include "../Core/LinearTransform.h"

namespace BattleAIShared {
    class AIParameterWithShapeEntityData : public BattleAIShared::AIParameterEntityData {
        char pad_0x28[0x8];
        Core::LinearTransform FollowTransform; // 0x30
        Boolean IgnoreRotation; // 0x70
        char pad_0x71[0xF];
    }; // 0x80
    static_assert(sizeof(AIParameterWithShapeEntityData) == 0x80);
}