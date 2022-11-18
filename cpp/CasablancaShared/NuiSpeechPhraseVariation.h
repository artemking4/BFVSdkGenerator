// Object: NuiSpeechPhraseVariation
// ClassId: 4376
// RuntimeId: 6568
// TypeInfo: 0x0000000144D29820
#include "../Core/DataContainer.h"
#include "../CasablancaShared/NuiSpeechPhrase.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class NuiSpeechPhraseVariation : public Core::DataContainer {
        CasablancaShared::NuiSpeechPhrase Phrase; // 0x18
        Int32 VariationIndex; // 0x20
        char pad_0x24[0x4];
        CString Translation; // 0x28
        Array<CString> Pronunciations; // 0x30
    }; // 0x38
    static_assert(sizeof(NuiSpeechPhraseVariation) == 0x38);
}
#pragma pack(pop)