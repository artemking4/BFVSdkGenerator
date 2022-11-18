// Object: AudioSystemAsset
// ClassId: 153
// RuntimeId: 55143
// TypeInfo: 0x0000000144E16440
#include "../Core/Asset.h"
#include "../Audio/SoundMasterPatchAsset.h"
#include "../Audio/StreamPool.h"
#include "../Audio/StreamPoolMapping.h"
#include "../Audio/StreamPoolPreset.h"
#include "../Audio/SoundDataPolicy.h"
#include "../Global/Uint32.h"
#include "../Audio/MixerSystemAsset.h"
#include "../Audio/AudioLanguage.h"
#include "../Audio/AudioLanguageSetting.h"
#include "../Audio/ScopeCollectionAsset.h"
#include "../Audio/HdrSetting.h"
#include "../Audio/NewWaveSelectionGroupCategory.h"
#include "../Audio/NewWaveSelectionGroup.h"
#include "../Audio/SoundContextSystemAsset.h"

#pragma pack(push, 8)
namespace Audio {
    class AudioSystemAsset : public Core::Asset {
        Audio::SoundMasterPatchAsset MasterPatch; // 0x20
        Array<Audio::StreamPool> StreamPools; // 0x28
        Array<Audio::StreamPoolMapping> GlobalStreamPools; // 0x30
        Array<Audio::StreamPoolPreset> StreamPoolPresets; // 0x38
        Audio::StreamPoolPreset DefaultStreamPoolPreset; // 0x40
        Array<Audio::SoundDataPolicy> DataPolicies; // 0x48
        Uint32 SampleRate; // 0x50
        char pad_0x54[0x4];
        Audio::MixerSystemAsset MixerSystem; // 0x58
        Array<Audio::AudioLanguage> Languages; // 0x60
        Array<Audio::AudioLanguageSetting> LanguageSettings; // 0x68
        Audio::AudioLanguage DefaultLanguage; // 0x70
        Audio::ScopeCollectionAsset ScopeCollection; // 0x78
        Array<Audio::HdrSetting> HdrSettings; // 0x80
        Audio::HdrSetting DefaultHdrSetting; // 0x88
        Array<Audio::NewWaveSelectionGroupCategory> SelectionGroupCategories; // 0x90
        Array<Audio::NewWaveSelectionGroup> SelectionGroups; // 0x98
        Audio::SoundContextSystemAsset SoundContextSystem; // 0xA0
    }; // 0xA8
    static_assert(sizeof(AudioSystemAsset) == 0xA8);
}
#pragma pack(pop)