// Object: DakarPlayerDensityScorerEntityData
// ClassId: 2587
// RuntimeId: 2447
// TypeInfo: 0x0000000144D4FED0
#include "../CasablancaShared/DakarScorerData.h"
#include "../Global/Float32.h"
#include "../Core/FloatCurve.h"
#include "../CasablancaShared/PlayerDensityScoreRules.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DakarPlayerDensityScorerEntityData : public CasablancaShared::DakarScorerData {
        Float32 Radius; // 0x20
        char pad_0x24[0x4];
        Core::FloatCurve PlayerCountScoreCurve; // 0x28
        CasablancaShared::PlayerDensityScoreRules ScoreRules; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(DakarPlayerDensityScorerEntityData) == 0x38);
}
#pragma pack(pop)