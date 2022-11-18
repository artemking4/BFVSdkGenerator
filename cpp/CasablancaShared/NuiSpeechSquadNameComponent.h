// Object: NuiSpeechSquadNameComponent
// ClassId: 4375
// RuntimeId: 52556
// TypeInfo: 0x0000000144D28CA0
#include "../CasablancaShared/NuiSpeechPhraseComponent.h"
#include "../CasablancaShared/NuiSpeechSquadNames.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class NuiSpeechSquadNameComponent : public CasablancaShared::NuiSpeechPhraseComponent {
        CasablancaShared::NuiSpeechSquadNames SquadNames; // 0x20
    }; // 0x28
    static_assert(sizeof(NuiSpeechSquadNameComponent) == 0x28);
}
#pragma pack(pop)