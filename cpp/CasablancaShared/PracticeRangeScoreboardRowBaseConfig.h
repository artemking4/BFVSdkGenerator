// Object: PracticeRangeScoreboardRowBaseConfig
// ClassId: 4457
// RuntimeId: 57362
// TypeInfo: 0x0000000144D86420
#include "../Core/DataContainer.h"
#include "../UIIncubatorShared/LocalizedStringId.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PracticeRangeScoreboardRowBaseConfig : public Core::DataContainer {
        UIIncubatorShared::LocalizedStringId RowNameSid; // 0x18
    }; // 0x20
    static_assert(sizeof(PracticeRangeScoreboardRowBaseConfig) == 0x20);
}
#pragma pack(pop)