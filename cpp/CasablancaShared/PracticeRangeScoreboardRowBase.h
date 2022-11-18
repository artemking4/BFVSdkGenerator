// Object: PracticeRangeScoreboardRowBase
// ClassId: 4453
// RuntimeId: 57082
// TypeInfo: 0x0000000144D86620
#include "../Core/DataContainer.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PracticeRangeScoreboardRowBase : public Core::DataContainer {
        UIIncubatorShared::LocalizedStringId RowNameSid; // 0x18
        Boolean ShowBackground; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(PracticeRangeScoreboardRowBase) == 0x28);
}
#pragma pack(pop)