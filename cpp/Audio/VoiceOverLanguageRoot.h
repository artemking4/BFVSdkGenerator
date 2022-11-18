// Object: VoiceOverLanguageRoot
// ClassId: 5593
// RuntimeId: 1014
// TypeInfo: 0x0000000144E1ABC0
#include "../Core/DataContainer.h"
#include "../Audio/AudioLanguage.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverLanguageRoot : public Core::DataContainer {
        Audio::AudioLanguage Language; // 0x18
        CString Path; // 0x20
    }; // 0x28
    static_assert(sizeof(VoiceOverLanguageRoot) == 0x28);
}
#pragma pack(pop)