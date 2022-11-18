// Object: NuiSpeechPhrase
// ClassId: 4364
// RuntimeId: 6676
// TypeInfo: 0x0000000144D29220
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/NuiSpeechPhraseType.h"
#include "../CasablancaShared/NuiSpeechPhraseHintMode.h"
#include "../CasablancaShared/NuiSpeechConfidencePolicySetup.h"

namespace CasablancaShared {
    class NuiSpeechPhrase : public Core::DataContainer {
        CString Tag; // 0x18
        Int32 NumericId; // 0x20
        CasablancaShared::NuiSpeechPhraseType PhraseType; // 0x24
        CString SuccessMessage; // 0x28
        CString Description; // 0x30
        CasablancaShared::NuiSpeechPhraseHintMode DescriptionMode; // 0x38
        char pad_0x3C[0x4];
        CasablancaShared::NuiSpeechConfidencePolicySetup ConfidencePolicy; // 0x40
    }; // 0x48
    static_assert(sizeof(NuiSpeechPhrase) == 0x48);
}