// Object: MusicPlayerNodeData
// ClassId: 1053
// RuntimeId: 43762
// TypeInfo: 0x0000000144E1CD40
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/MusicBaseAsset.h"
#include "../Global/Uint32.h"
#include "../Audio/MusicPlayerEntry.h"
#include "../Audio/MusicLayerEntry.h"
#include "../Audio/MusicPlayerPlugins.h"
#include "../Audio/MusicPlayerRoutedVoice.h"
#include "../Audio/OutputNodeData.h"

#pragma pack(push, 8)
namespace Audio {
    class MusicPlayerNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Pitch; // 0x18
        Audio::AudioGraphNodePort Amplitude; // 0x20
        Audio::AudioGraphNodePort Buffer; // 0x28
        Audio::AudioGraphNodePort Start; // 0x30
        Audio::AudioGraphNodePort Stop; // 0x38
        Audio::AudioGraphNodePort Pause; // 0x40
        Audio::AudioGraphNodePort Unpause; // 0x48
        Audio::AudioGraphNodePort Output; // 0x50
        Audio::AudioGraphNodePort Overlay; // 0x58
        Audio::AudioGraphNodePort IsBuffered; // 0x60
        Audio::AudioGraphNodePort IsFinished; // 0x68
        Audio::MusicBaseAsset Asset; // 0x70
        Uint32 DefaultStartEventNameHash; // 0x78
        char pad_0x7C[0x4];
        Array<Audio::MusicPlayerEntry> Entries; // 0x80
        Array<Audio::MusicLayerEntry> Layers; // 0x88
        Array<Audio::MusicPlayerPlugins> Plugins; // 0x90
        Array<Audio::MusicPlayerRoutedVoice> RoutedVoices; // 0x98
        Audio::OutputNodeData PitchSource; // 0xA0
        Audio::AudioGraphNodePort OnBeat; // 0xA8
        Audio::AudioGraphNodePort OnBar; // 0xB0
        Audio::AudioGraphNodePort OnTransition; // 0xB8
    }; // 0xC0
    static_assert(sizeof(MusicPlayerNodeData) == 0xC0);
}
#pragma pack(pop)