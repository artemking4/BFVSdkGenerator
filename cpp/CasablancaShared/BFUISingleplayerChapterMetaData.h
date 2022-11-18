// Object: BFUISingleplayerChapterMetaData
// ClassId: 5405
// RuntimeId: 20911
// TypeInfo: 0x0000000144D98E10
#include "../CasablancaShared/UIItemDescription.h"
#include "../CasablancaShared/BFUISingleplayerChapterLetterMetaData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISingleplayerChapterMetaData : public CasablancaShared::UIItemDescription {
        Array<CasablancaShared::BFUISingleplayerChapterLetterMetaData> Letters; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUISingleplayerChapterMetaData) == 0x30);
}
#pragma pack(pop)