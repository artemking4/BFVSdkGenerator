// Object: BFUISingleplayerChapterLetterMetaData
// ClassId: 1242
// RuntimeId: 7087
// TypeInfo: 0x0000000144D98E90
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../UIIncubatorShared/LocalizedStringId.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISingleplayerChapterLetterMetaData : public Core::DataContainer {
        CString StatsCode; // 0x18
        UIIncubatorShared::LocalizedStringId TextSid; // 0x20
        UIIncubatorShared::LocalizedStringId TitleSid; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUISingleplayerChapterLetterMetaData) == 0x30);
}
#pragma pack(pop)