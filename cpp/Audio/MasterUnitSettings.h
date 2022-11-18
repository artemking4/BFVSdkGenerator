// Object: MasterUnitSettings
// ClassId: 4248
// RuntimeId: 49103
// TypeInfo: 0x0000000144E01BF0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Audio/EqualizerSettings.h"
#include "../Audio/CompressorSettings.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class MasterUnitSettings : public Core::DataContainer {
        CString Name; // 0x18
        Audio::EqualizerSettings Equalizer; // 0x20
        Audio::CompressorSettings Compressor; // 0x28
        Float32 MasterVolume; // 0x30
        Float32 MasterLfeGain; // 0x34
        Float32 MasterDialogGain; // 0x38
        Float32 ReverbVolume; // 0x3C
        Float32 MainMixVolume; // 0x40
        Float32 DistortionClipLevel; // 0x44
        Float32 ParallelDistortionGain; // 0x48
        Float32 PostEffectsGain; // 0x4C
        Float32 FadeTime; // 0x50
        char pad_0x54[0x4];
    }; // 0x58
    static_assert(sizeof(MasterUnitSettings) == 0x58);
}
#pragma pack(pop)