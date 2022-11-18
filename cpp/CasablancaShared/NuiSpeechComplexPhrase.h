// Object: NuiSpeechComplexPhrase
// ClassId: 4366
// RuntimeId: 26997
// TypeInfo: 0x0000000144D28C20
#include "../CasablancaShared/NuiSpeechPhrase.h"
#include "../CasablancaShared/NuiSpeechPhraseComponent.h"

namespace CasablancaShared {
    class NuiSpeechComplexPhrase : public CasablancaShared::NuiSpeechPhrase {
        Array<CasablancaShared::NuiSpeechPhraseComponent> PhraseComponents; // 0x48
    }; // 0x50
    static_assert(sizeof(NuiSpeechComplexPhrase) == 0x50);
}