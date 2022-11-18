// Object: NuiSpeechListPhraseComponent
// ClassId: 4374
// RuntimeId: 30812
// TypeInfo: 0x0000000144D28DA0
#include "../CasablancaShared/NuiSpeechPhraseComponent.h"
#include "../CasablancaShared/NuiSpeechListElement.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class NuiSpeechListPhraseComponent : public CasablancaShared::NuiSpeechPhraseComponent {
        Array<CasablancaShared::NuiSpeechListElement> List; // 0x20
    }; // 0x28
    static_assert(sizeof(NuiSpeechListPhraseComponent) == 0x28);
}
#pragma pack(pop)