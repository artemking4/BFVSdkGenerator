// Object: NuiSpeechCommorosePhrase
// ClassId: 4365
// RuntimeId: 19500
// TypeInfo: 0x0000000144D291A0
#include "../CasablancaShared/NuiSpeechPhrase.h"
#include "../Global/CString.h"
#include "../CasablancaShared/NuiSpeechCommoroseApplicabilityCondition.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class NuiSpeechCommorosePhrase : public CasablancaShared::NuiSpeechPhrase {
        CString CommoRoseButton; // 0x48
        CasablancaShared::NuiSpeechCommoroseApplicabilityCondition ApplicabilityCondition; // 0x50
        char pad_0x54[0x4];
    }; // 0x58
    static_assert(sizeof(NuiSpeechCommorosePhrase) == 0x58);
}
#pragma pack(pop)