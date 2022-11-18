// Object: NuiSpeechGrammarBundleAsset
// ClassId: 601
// RuntimeId: 1174
// TypeInfo: 0x0000000144D296A0
#include "../Core/Asset.h"
#include "../CasablancaShared/NuiSpeechConfidencePolicySetup.h"
#include "../CasablancaShared/NuiSpeechGrammarAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class NuiSpeechGrammarBundleAsset : public Core::Asset {
        CasablancaShared::NuiSpeechConfidencePolicySetup ConfidencePolicy; // 0x20
        Array<CasablancaShared::NuiSpeechGrammarAsset> Grammars; // 0x28
    }; // 0x30
    static_assert(sizeof(NuiSpeechGrammarBundleAsset) == 0x30);
}
#pragma pack(pop)