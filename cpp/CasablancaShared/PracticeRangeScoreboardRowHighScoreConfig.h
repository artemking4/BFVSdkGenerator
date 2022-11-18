// Object: PracticeRangeScoreboardRowHighScoreConfig
// ClassId: 4458
// RuntimeId: 32498
// TypeInfo: 0x0000000144D86320
#include "../CasablancaShared/PracticeRangeScoreboardRowBaseConfig.h"
#include "../CasablancaShared/ScoreboardRowProfileOptions.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PracticeRangeScoreboardRowHighScoreConfig : public CasablancaShared::PracticeRangeScoreboardRowBaseConfig {
        CasablancaShared::ScoreboardRowProfileOptions HighScore; // 0x20
    }; // 0x30
    static_assert(sizeof(PracticeRangeScoreboardRowHighScoreConfig) == 0x30);
}
#pragma pack(pop)