// Object: WaveQueryNodeData
// ClassId: 1117
// RuntimeId: 27538
// TypeInfo: 0x0000000144E02270
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/WaveQueryNodeParameterEntry.h"
#include "../Audio/WaveQueryWaveAssetReference.h"

#pragma pack(push, 8)
namespace Audio {
    class WaveQueryNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Select; // 0x18
        Array<Audio::WaveQueryNodeParameterEntry> SelectionParameters; // 0x20
        Audio::AudioGraphNodePort Selection; // 0x28
        Audio::AudioGraphNodePort Selected; // 0x30
        Audio::AudioGraphNodePort SelectionFailed; // 0x38
        Array<Audio::WaveQueryWaveAssetReference> WaveReferences; // 0x40
    }; // 0x48
    static_assert(sizeof(WaveQueryNodeData) == 0x48);
}
#pragma pack(pop)