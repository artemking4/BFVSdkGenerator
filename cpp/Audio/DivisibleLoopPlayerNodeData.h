// Object: DivisibleLoopPlayerNodeData
// ClassId: 987
// RuntimeId: 8086
// TypeInfo: 0x0000000144E03BF0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundWaveAssetBase.h"
#include "../Audio/NewWaveSelectionGroup.h"
#include "../Audio/DivisibleLoopPlayerPlugins.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Audio/DivisibleLoopPlayerNodeDebugData.h"

#pragma pack(push, 8)
namespace Audio {
    class DivisibleLoopPlayerNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Start; // 0x18
        Audio::AudioGraphNodePort Stop; // 0x20
        Audio::AudioGraphNodePort Amplitude; // 0x28
        Audio::AudioGraphNodePort FreezeSegment; // 0x30
        Audio::AudioGraphNodePort Output; // 0x38
        Audio::SoundWaveAssetBase Wave; // 0x40
        Audio::NewWaveSelectionGroup SelectionGroup; // 0x48
        Audio::AudioGraphNodePort ExternalWave; // 0x50
        Array<Audio::DivisibleLoopPlayerPlugins> Plugins; // 0x58
        Float32 CrossFadeLength; // 0x60
        char pad_0x64[0x4];
        Audio::DivisibleLoopPlayerNodeDebugData DivisibleLoopPlayerNodeDebug; // 0x68
        Boolean StartAtRandomPosition; // 0x70
        char pad_0x71[0x7];
    }; // 0x78
    static_assert(sizeof(DivisibleLoopPlayerNodeData) == 0x78);
}
#pragma pack(pop)