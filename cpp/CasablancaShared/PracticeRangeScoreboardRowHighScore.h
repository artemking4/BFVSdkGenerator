// Object: PracticeRangeScoreboardRowHighScore
// ClassId: 4454
// RuntimeId: 3696
// TypeInfo: 0x0000000144D86520
#include "../CasablancaShared/PracticeRangeScoreboardRowBase.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PracticeRangeScoreboardRowHighScore : public CasablancaShared::PracticeRangeScoreboardRowBase {
        Int32 HighScore; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(PracticeRangeScoreboardRowHighScore) == 0x30);
}
#pragma pack(pop)