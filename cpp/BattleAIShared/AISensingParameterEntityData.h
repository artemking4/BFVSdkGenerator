// Object: AISensingParameterEntityData
// ClassId: 2001
// RuntimeId: 45744
// TypeInfo: 0x0000000144C11B00
#include "../BattleAIShared/AIParameterEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AISensingParameterEntityData : public BattleAIShared::AIParameterEntityData {
        Float32 VisionRangeMultiplier; // 0x28
        Float32 HearingRangeMultiplier; // 0x2C
        Boolean IncludeTerrain; // 0x30
        Boolean AllowInvestigations; // 0x31
        char pad_0x32[0x6];
    }; // 0x38
    static_assert(sizeof(AISensingParameterEntityData) == 0x38);
}
#pragma pack(pop)