// Object: NuiSpeechCompiledGrammar
// ClassId: 597
// RuntimeId: 57665
// TypeInfo: 0x0000000144D297A0
#include "../Core/Asset.h"
#include "../CasablancaShared/NuiSpeechGrammarBundleAsset.h"
#include "../CasablancaShared/Dialect.h"
#include "../CasablancaShared/NuiSpeechPhraseVariation.h"
#include "../Global/Uint8.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class NuiSpeechCompiledGrammar : public Core::Asset {
        CasablancaShared::NuiSpeechGrammarBundleAsset GrammarBundle; // 0x20
        CasablancaShared::Dialect Dialect; // 0x28
        char pad_0x2C[0x4];
        Array<CasablancaShared::NuiSpeechPhraseVariation> PhraseVariations; // 0x30
        Array<Uint8> Data; // 0x38
        Uint32 Size; // 0x40
        char pad_0x44[0x4];
    }; // 0x48
    static_assert(sizeof(NuiSpeechCompiledGrammar) == 0x48);
}
#pragma pack(pop)