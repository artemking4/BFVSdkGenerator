// Object: NuiSpeechFocusPointPhrase
// ClassId: 4371
// RuntimeId: 15265
// TypeInfo: 0x0000000144D29120
#include "../CasablancaShared/NuiSpeechPhrase.h"
#include "../CasablancaShared/NuiSpeechFocusPointAction.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class NuiSpeechFocusPointPhrase : public CasablancaShared::NuiSpeechPhrase {
        CasablancaShared::NuiSpeechFocusPointAction Action; // 0x48
        char pad_0x4C[0x4];
        CString FocusPointName; // 0x50
    }; // 0x58
    static_assert(sizeof(NuiSpeechFocusPointPhrase) == 0x58);
}
#pragma pack(pop)