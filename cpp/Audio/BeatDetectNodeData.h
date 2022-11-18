// Object: BeatDetectNodeData
// ClassId: 960
// RuntimeId: 28409
// TypeInfo: 0x0000000144E01EF0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Float32.h"
#include "../Audio/BeatDetectFrameSize.h"
#include "../Audio/BeatDetectCausality.h"
#include "../Global/Int32.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 8)
namespace Audio {
    class BeatDetectNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Out; // 0x20
        Audio::AudioGraphNodePort Start; // 0x28
        Audio::AudioGraphNodePort Stop; // 0x30
        Float32 FilterResponseTime; // 0x38
        Float32 ZeroRunDetectTime; // 0x3C
        Audio::BeatDetectFrameSize BeatDetectFrameSize; // 0x40
        Audio::BeatDetectCausality Causality; // 0x44
        Float32 MaximumBeatsPerMinute; // 0x48
        Float32 UpdateLookahead; // 0x4C
        Int32 ClicksPerBeat; // 0x50
        Audio::AudioGraphNodePort Click; // 0x54
        Audio::AudioGraphNodePort BeatsPerMinute; // 0x5C
        Audio::AudioGraphNodePort BeatTime; // 0x64
        Audio::AudioGraphNodePort BeatConfidence; // 0x6C
        Audio::AudioGraphNodePort Meter; // 0x74
        Audio::AudioGraphNodePort MeterConfidence; // 0x7C
        Audio::SoundGraphPluginRef BeatDetectPlugin; // 0x84
        char pad_0x87[0x1];
    }; // 0x88
    static_assert(sizeof(BeatDetectNodeData) == 0x88);
}
#pragma pack(pop)