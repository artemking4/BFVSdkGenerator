// Object: PracticeRangeScoreboardRowStars
// ClassId: 4456
// RuntimeId: 55900
// TypeInfo: 0x0000000144D865A0
#include "../CasablancaShared/PracticeRangeScoreboardRowBase.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PracticeRangeScoreboardRowStars : public CasablancaShared::PracticeRangeScoreboardRowBase {
        Int32 BronzeStars; // 0x28
        Int32 SilverStars; // 0x2C
        Int32 GoldStars; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(PracticeRangeScoreboardRowStars) == 0x38);
}
#pragma pack(pop)