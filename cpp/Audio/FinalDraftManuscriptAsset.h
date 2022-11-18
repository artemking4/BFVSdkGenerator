// Object: FinalDraftManuscriptAsset
// ClassId: 910
// RuntimeId: 24054
// TypeInfo: 0x0000000144E1AA40
#include "../Audio/VoiceOverManuscriptAsset.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Audio {
    class FinalDraftManuscriptAsset : public Audio::VoiceOverManuscriptAsset {
        CString SpreadsheetFileName; // 0x98
    }; // 0xA0
    static_assert(sizeof(FinalDraftManuscriptAsset) == 0xA0);
}
#pragma pack(pop)