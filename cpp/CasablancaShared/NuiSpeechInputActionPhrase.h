// Object: NuiSpeechInputActionPhrase
// ClassId: 4372
// RuntimeId: 53936
// TypeInfo: 0x0000000144D28FA0
#include "../CasablancaShared/NuiSpeechPhrase.h"
#include "../GameShared/InputDeviceMessageEvent.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class NuiSpeechInputActionPhrase : public CasablancaShared::NuiSpeechPhrase {
        GameShared::InputDeviceMessageEvent Event; // 0x48
        char pad_0x4C[0x4];
    }; // 0x50
    static_assert(sizeof(NuiSpeechInputActionPhrase) == 0x50);
}
#pragma pack(pop)