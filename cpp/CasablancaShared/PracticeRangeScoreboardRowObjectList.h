// Object: PracticeRangeScoreboardRowObjectList
// ClassId: 4461
// RuntimeId: 23242
// TypeInfo: 0x0000000144D86220
#include "../Core/DataContainer.h"
#include "../CasablancaShared/PracticeRangeScoreboardRowBase.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PracticeRangeScoreboardRowObjectList : public Core::DataContainer {
        Array<CasablancaShared::PracticeRangeScoreboardRowBase> Rows; // 0x18
    }; // 0x20
    static_assert(sizeof(PracticeRangeScoreboardRowObjectList) == 0x20);
}
#pragma pack(pop)