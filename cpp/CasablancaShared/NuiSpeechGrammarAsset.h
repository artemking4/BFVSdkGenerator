// Object: NuiSpeechGrammarAsset
// ClassId: 600
// RuntimeId: 63977
// TypeInfo: 0x0000000144D29720
#include "../Core/Asset.h"
#include "../CasablancaShared/NuiSpeechPhrase.h"
#include "../CasablancaShared/NuiSpeechConfidencePolicySetup.h"
#include "../CasablancaShared/NuiSpeechGrammarBundleAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class NuiSpeechGrammarAsset : public Core::Asset {
        Array<CasablancaShared::NuiSpeechPhrase> Phrases; // 0x20
        CasablancaShared::NuiSpeechConfidencePolicySetup ConfidencePolicy; // 0x28
        CasablancaShared::NuiSpeechGrammarBundleAsset GrammarBundle; // 0x30
    }; // 0x38
    static_assert(sizeof(NuiSpeechGrammarAsset) == 0x38);
}
#pragma pack(pop)