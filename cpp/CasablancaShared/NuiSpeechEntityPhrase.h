// Object: NuiSpeechEntityPhrase
// ClassId: 4370
// RuntimeId: 3200
// TypeInfo: 0x0000000144D290A0
#include "../CasablancaShared/NuiSpeechPhrase.h"
#include "../CasablancaShared/ScreenActionInputEventType.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class NuiSpeechEntityPhrase : public CasablancaShared::NuiSpeechPhrase {
        CasablancaShared::ScreenActionInputEventType EventType; // 0x48
        Int32 Parameter; // 0x4C
    }; // 0x50
    static_assert(sizeof(NuiSpeechEntityPhrase) == 0x50);
}
#pragma pack(pop)