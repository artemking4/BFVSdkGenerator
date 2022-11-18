// Object: SamplerNodeData
// ClassId: 1088
// RuntimeId: 1929
// TypeInfo: 0x0000000144E02670
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundWaveAssetBase.h"
#include "../Global/Boolean.h"
#include "../Audio/SamplerOffsetMode.h"
#include "../Global/Uint8.h"
#include "../Audio/SamplerPlugins.h"
#include "../Audio/OutputNodeData.h"
#include "../Audio/SamplerNodeVersion.h"
#include "../Audio/SamplerNodeDebugData.h"
#include "../Audio/SamplerPositionMode.h"

#pragma pack(push, 8)
namespace Audio {
    class SamplerNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort ExternalWave; // 0x18
        Audio::AudioGraphNodePort Variation; // 0x20
        Audio::AudioGraphNodePort Selection; // 0x28
        Audio::AudioGraphNodePort Offset; // 0x30
        Audio::AudioGraphNodePort Delay; // 0x38
        Audio::AudioGraphNodePort Pitch; // 0x40
        Audio::AudioGraphNodePort Amplitude; // 0x48
        Audio::AudioGraphNodePort EnableStep; // 0x50
        Audio::AudioGraphNodePort ShuffleSegments; // 0x58
        Audio::AudioGraphNodePort EnableSubtitles; // 0x60
        Audio::AudioGraphNodePort Buffer; // 0x68
        Audio::AudioGraphNodePort Trigger; // 0x70
        Audio::AudioGraphNodePort Release; // 0x78
        Audio::AudioGraphNodePort Step; // 0x80
        Audio::AudioGraphNodePort Output; // 0x88
        Audio::AudioGraphNodePort Finished; // 0x90
        Audio::AudioGraphNodePort Buffered; // 0x98
        Audio::AudioGraphNodePort Position; // 0xA0
        Audio::AudioGraphNodePort VariationCount; // 0xA8
        Audio::SoundWaveAssetBase Wave; // 0xB0
        Audio::SamplerOffsetMode OffsetMode; // 0xB8
        char pad_0xBC[0x4];
        Array<Audio::SamplerPlugins> Plugins; // 0xC0
        Audio::OutputNodeData PitchSource; // 0xC8
        Audio::SamplerNodeVersion Version; // 0xD0
        char pad_0xD4[0x4];
        Audio::SamplerNodeDebugData SamplerNodeDebug; // 0xD8
        Audio::SamplerPositionMode PositionMode; // 0xE0
        Boolean Looping; // 0xE4
        Boolean InstantRelease; // 0xE5
        Uint8 LeadOut; // 0xE6
        char pad_0xE7[0x1];
    }; // 0xE8
    static_assert(sizeof(SamplerNodeData) == 0xE8);
}
#pragma pack(pop)