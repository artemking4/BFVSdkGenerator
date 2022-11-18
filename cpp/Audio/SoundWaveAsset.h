// Object: SoundWaveAsset
// ClassId: 754
// RuntimeId: 52765
// TypeInfo: 0x0000000144E15740
#include "../Audio/SoundWaveAssetBase.h"
#include "../Audio/SoundWaveRuntimeVariation.h"
#include "../Audio/SoundWaveLocalizationInfo.h"
#include "../Global/CString.h"
#include "../Audio/SoundWaveSubtitle.h"
#include "../Audio/SoundWaveVariationSelection.h"
#include "../Global/Boolean.h"
#include "../Global/Uint8.h"
#include "../Global/Int32.h"
#include "../Audio/SoundWaveVariationSegment.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundWaveAsset : public Audio::SoundWaveAssetBase {
        Array<Audio::SoundWaveRuntimeVariation> RuntimeVariations; // 0x48
        Array<Audio::SoundWaveLocalizationInfo> Localization; // 0x50
        Array<CString> SubtitleStringIds; // 0x58
        Array<Audio::SoundWaveSubtitle> Subtitles; // 0x60
        Audio::SoundWaveVariationSelection Selection; // 0x68
        Int32 AdditionalSubtitleInfoType; // 0x6C
        Array<Audio::SoundWaveVariationSegment> Segments; // 0x70
        Boolean Seekable; // 0x78
        Uint8 VariationHistoryCount; // 0x79
        Uint8 PersistentVariationCount; // 0x7A
        char pad_0x7B[0x5];
    }; // 0x80
    static_assert(sizeof(SoundWaveAsset) == 0x80);
}
#pragma pack(pop)