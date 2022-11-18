// Object: VoiceOverPronunciation
// ClassId: 5635
// RuntimeId: 12898
// TypeInfo: 0x0000000144E1A940
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Audio/AudioLanguage.h"
#include "../Audio/VoiceOverPronunciationFallback.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverPronunciation : public Core::DataContainer {
        CString Name; // 0x18
        Audio::AudioLanguage PrimaryLanguage; // 0x20
        Audio::AudioLanguage SecondaryLanguage; // 0x28
        Audio::VoiceOverPronunciationFallback SecondaryFallback; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(VoiceOverPronunciation) == 0x38);
}
#pragma pack(pop)