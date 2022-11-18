// Object: SoundEntityTrackData
// ClassId: 4054
// RuntimeId: 46692
// TypeInfo: 0x0000000144E1E240
#include "../Timeline/TimelineTrackData.h"
#include "../Audio/SoundAsset.h"
#include "../Global/Boolean.h"
#include "../Audio/AudioGraphParameter.h"
#include "../Audio/AudioGraphEvent.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundEntityTrackData : public Timeline::TimelineTrackData {
        Audio::SoundAsset Sound; // 0x30
        Array<Timeline::TimelineTrackData> LayerTracks; // 0x38
        Audio::AudioGraphParameter GuideTrackSource; // 0x40
        Audio::AudioGraphEvent SkippedEvent; // 0x48
        Audio::AudioGraphEvent BufferEvent; // 0x50
        Audio::AudioGraphEvent BufferedEvent; // 0x58
        Audio::AudioGraphEvent SeekToEvent; // 0x60
        Audio::AudioGraphParameter SeekToParameter; // 0x68
        Audio::AudioGraphParameter SoundLengthParameter; // 0x70
        Audio::AudioGraphEvent FinishedEvent; // 0x78
        Int32 GuideTrackPriority; // 0x80
        Boolean ForceStopWithTimeline; // 0x84
        Boolean FireDefaultStopEventOnComplete; // 0x85
        char pad_0x86[0x2];
    }; // 0x88
    static_assert(sizeof(SoundEntityTrackData) == 0x88);
}
#pragma pack(pop)