// Object: AIUseCoverEntityData
// ClassId: 2008
// RuntimeId: 17289
// TypeInfo: 0x0000000144C11080
#include "../BattleAIShared/AIParameterEntityData.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class AIUseCoverEntityData : public BattleAIShared::AIParameterEntityData {
        char pad_0x28[0x8];
        Core::LinearTransform CoverTransform; // 0x30
        Int32 CoverSlotIndex; // 0x70
        Boolean IsScriptedToCover; // 0x74
        char pad_0x75[0xB];
    }; // 0x80
    static_assert(sizeof(AIUseCoverEntityData) == 0x80);
}
#pragma pack(pop)