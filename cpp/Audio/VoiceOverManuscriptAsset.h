// Object: VoiceOverManuscriptAsset
// ClassId: 909
// RuntimeId: 55069
// TypeInfo: 0x0000000144E1AB40
#include "../Core/Asset.h"
#include "../Audio/AudioLanguage.h"
#include "../Audio/VoiceOverLanguageRoot.h"
#include "../Audio/VoiceOverWaveNameTranslation.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Audio/VoiceOverManuscriptLanguageColumns.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverManuscriptAsset : public Core::Asset {
        Audio::AudioLanguage MasterLanguage; // 0x20
        Array<Audio::VoiceOverLanguageRoot> Languages; // 0x28
        Audio::VoiceOverWaveNameTranslation NameTranslation; // 0x30
        Uint32 VariationUnderscoreCount; // 0x34
        CString StringIdColumn; // 0x38
        CString FileNameColumn; // 0x40
        CString PathColumn; // 0x48
        CString WaveAssetStatusColumn; // 0x50
        CString SheetName; // 0x58
        CString VoiceColumn; // 0x60
        CString CharacterColumn; // 0x68
        Array<Audio::VoiceOverManuscriptLanguageColumns> LanguageColumns; // 0x70
        Int32 FirstContentRow; // 0x78
        char pad_0x7C[0x4];
        CString StringIdPrefix; // 0x80
        CString OutputPath; // 0x88
        Boolean KeepPath; // 0x90
        Boolean StringIdUpperCase; // 0x91
        Boolean AllowDelete; // 0x92
        Boolean EnableSubtitles; // 0x93
        char pad_0x94[0x4];
    }; // 0x98
    static_assert(sizeof(VoiceOverManuscriptAsset) == 0x98);
}
#pragma pack(pop)