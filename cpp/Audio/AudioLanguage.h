// Object: AudioLanguage
// ClassId: 1180
// RuntimeId: 17225
// TypeInfo: 0x0000000144E01E70
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Core/LanguageFormat.h"

#pragma pack(push, 8)
namespace Audio {
    class AudioLanguage : public Core::DataContainer {
        CString Name; // 0x18
        Core::LanguageFormat LanguageMapping; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(AudioLanguage) == 0x28);
}
#pragma pack(pop)