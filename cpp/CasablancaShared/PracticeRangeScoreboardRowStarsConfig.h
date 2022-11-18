// Object: PracticeRangeScoreboardRowStarsConfig
// ClassId: 4460
// RuntimeId: 33136
// TypeInfo: 0x0000000144D863A0
#include "../CasablancaShared/PracticeRangeScoreboardRowBaseConfig.h"
#include "../CasablancaShared/ScoreboardRowProfileOptions.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PracticeRangeScoreboardRowStarsConfig : public CasablancaShared::PracticeRangeScoreboardRowBaseConfig {
        CasablancaShared::ScoreboardRowProfileOptions BronzeStars; // 0x20
        CasablancaShared::ScoreboardRowProfileOptions SilverStars; // 0x30
        CasablancaShared::ScoreboardRowProfileOptions GoldStars; // 0x40
    }; // 0x50
    static_assert(sizeof(PracticeRangeScoreboardRowStarsConfig) == 0x50);
}
#pragma pack(pop)