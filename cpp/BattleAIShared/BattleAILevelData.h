// Object: BattleAILevelData
// ClassId: 77
// RuntimeId: 49357
// TypeInfo: 0x0000000144C070E0
#include "../GameShared/AILevelData.h"
#include "../Global/Uint32.h"
#include "../BattleAIShared/CoverGridSettings.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class BattleAILevelData : public GameShared::AILevelData {
        Uint32 MaxCorpses; // 0x18
        Float32 VisionRangeMultiplier; // 0x1C
        Float32 HearingRangeMultiplier; // 0x20
        BattleAIShared::CoverGridSettings CoverGrid; // 0x24
    }; // 0x28
    static_assert(sizeof(BattleAILevelData) == 0x28);
}
#pragma pack(pop)