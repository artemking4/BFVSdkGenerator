// Object: AudioLanguageSetting
// ClassId: 1181
// RuntimeId: 10955
// TypeInfo: 0x0000000144E165C0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../Audio/AudioLanguageMapping.h"

#pragma pack(push, 8)
namespace Audio {
    class AudioLanguageSetting : public Core::DataContainer {
        CString Name; // 0x18
        Uint32 NameHash; // 0x20
        char pad_0x24[0x4];
        CString DisplayName; // 0x28
        Array<Audio::AudioLanguageMapping> Mappings; // 0x30
        Boolean IsDefault; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(AudioLanguageSetting) == 0x40);
}
#pragma pack(pop)